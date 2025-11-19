#include "push_swap.h"

static int    swap(t_list **lst)
{
    t_list  *lst1;
    t_list  *lst2;


    if (!lst || !*lst || !(*lst)->next)
        return (0);
    lst1 = *lst;
    lst2 = (*lst)->next;
    lst1->next = lst2->next;
    lst2->next = lst1;
    *lst = lst2;
    return (1);
}

void    sa(t_list **lst_a)
{
    if (swap(lst_a))
        write(1, "sa\n", 3);
}

void    sb(t_list   **lst_b)
{
    if (swap(lst_b))
        write(1, "sb\n", 3);
}

void    ss(t_list **lst_a, t_list **lst_b)
{
    if (swap(lst_a) || swap(lst_b))
        write(1, "ss\n", 3);
}
