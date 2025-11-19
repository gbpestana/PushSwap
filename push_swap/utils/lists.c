#include "push_swap.h"

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

// int	main(void)
// {
// 	t_list *lst1;
// 	t_list *lst2;
// 	t_list *lst3;

// 	lst1 = new_node(1);
// 	lst2 = new_node(2);
// 	lst3 = new_node(3);
// 	lst1->next = lst2;
// 	lst2->next = lst3;
// 	lst3->next = NULL;
//     printf("Tamanho da lista: %d\n", list_size(lst1));
// 	free_list(lst1);
//     lst1 = NULL;
// }
