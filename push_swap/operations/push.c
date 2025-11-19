#include "push_swap.h"

static int push(t_list **dest, t_list **src)
{
    t_list  *tmp;

    if (!src || !*src)
        return (0);
    tmp = *src;
    *src = (*src)->next;
    tmp->next = *dest;
    *dest = tmp;
    return (1);
}

void    pa(t_list **lst_a, t_list **lst_b)
{
    if (push(lst_a, lst_b))
        write (1, "pa\n", 3);
}

void    pb(t_list **lst_b, t_list **lst_a)
{
    if (push(lst_b, lst_a))
        write (1, "pb\n", 3);
}
