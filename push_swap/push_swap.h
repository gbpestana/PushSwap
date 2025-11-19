#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

 # include<unistd.h>
 # include<stdlib.h>
 # include "utils/libft/libft.h"

typedef struct s_stack
{
  t_list   *a;
  t_list   *b;
}          t_stack;

typedef struct s_list
{
   void            *data;
   struct s_list   *next;
}          t_list;

void    sa(t_list **lst_a);
void    sb(t_list **lst_b);
void    ss(t_list **lst_a, t_list **lst_b);
void    pa(t_list **lst_a, t_list **lst_b);
void    pb(t_list **lst_b, t_list **lst_a);
void    ra(t_list **lst_a);
void    rb(t_list **lst_b);
void    rr(t_list **lst_a, t_list **lst_b);
void    rra(t_list **lst_a);
void    rrb(t_list **lst_b);
void    rrr(t_list **lst_a, t_list **lst_b);

t_list	*new_node(int data);
t_list    *last_node(t_list *lst);
int	list_size(t_list *lst);
void	free_list(t_list *lst);

#endif