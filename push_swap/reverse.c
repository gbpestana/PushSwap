#include "push_swap.h"

static int reverse(t_list **lst)
{
    t_list  *tmp1;
    t_list  *tmp2;

    if (!lst || !*lst || !(*lst)->next)
        return (0);
    tmp1 = NULL;
    tmp2 = *lst;
    while (tmp2->next)
    {
        tmp1 = tmp2;
        tmp2 = tmp2->next;
    }
    tmp2->next = *lst;
    *lst = tmp2;
    tmp1->next = NULL;
    return (1);
}

void    rra(t_list **lst_a)
{
    if (reverse(lst_a))
        write (1, "rra\n", 4);
}

void    rrb(t_list **lst_b)
{
    if (reverse(lst_b))
        write (1, "rrb\n", 4);
}

void    rrr(t_list **lst_a, t_list **lst_b)
{
    int is_rra;
    int is_rrb;

    is_rra = reverse(lst_a);
    is_rrb = reverse(lst_b);

    if (is_rra || is_rrb)
        write (1, "rrr\n", 4);
}
