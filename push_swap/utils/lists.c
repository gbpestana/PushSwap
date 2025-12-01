/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:01:23 by grodrig2          #+#    #+#             */
/*   Updated: 2025/12/01 16:41:18 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*last_node(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
t_list	*create_stack(char **numbers)
{
	t_list	*stack;
	t_list	*new;
	t_list	*last;
	bool	error;
	int		i;

	stack = NULL;
	i = 0;
	while (numbers[i])
	{
		new = new_node(ft_safe_atoi(numbers[i], &error));
		if (error || !new)
		{
			free_list(stack);
			error_exit();
		}
		if (!stack)
			stack = new;
		else
		{
			last = last_node(stack);
			last->next = new;
		}
		i++;
	}
	return (stack);
}

int	list_size(t_list *lst)
{
	int	i;

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
	t_list	*tmp;

	while (lst)
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
