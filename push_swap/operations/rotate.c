#include "push_swap.h"

static int rotate(t_list **lst)
{
    t_list  *tmp1;
    t_list  *tmp2;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    tmp1 = *lst;
    tmp2 = last_node(*lst);
    *lst = (*lst)->next;
    tmp1->next = NULL;
    tmp2->next = tmp1;
    return (1);
}

void    ra(t_list **lst_a)
{
    if (rotate(lst_a))
        write (1, "ra\n", 3);
}

void    rb(t_list **lst_b)
{
    if (rotate(lst_b))
        write (1, "rb\n", 3);
}

void    rr(t_list **lst_a, t_list **lst_b)
{
    int is_ra;
    int is_rb;

    is_ra = rotate(lst_a);
    is_rb = rotate(lst_b);

    if (is_ra || is_rb)
        write (1, "rr\n", 3);
}
