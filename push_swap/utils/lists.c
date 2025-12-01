/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 16:30:02 by grodrig2          #+#    #+#             */
/*   Updated: 2025/12/01 11:42:02 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list    *last_node(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next)
        lst = lst->next;
    return (lst);
}
// void	add_back(t_list **lst, t_list *new)
// {
//     t_list  *last;

//     if (!lst || !new)
//         return;
//     if (!*lst)
//     {
//         *lst = new;
//         return;
//     }
//     last = last_node(*lst);
//     last->next = new;
// }
// void	add_front(t_list **lst, t_list *new)
// {
//     if (!lst || !new)
//         return;
//     new->next = *lst;
//     *lst = new;
// }

int	list_size(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	free_list(t_list *lst)
{
	t_list *tmp;

	while(lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}

t_list	*new_node(int data)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}
