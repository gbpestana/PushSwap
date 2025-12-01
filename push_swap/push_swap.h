/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grodrig2 <grodrig2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:31:47 by grodrig2          #+#    #+#             */
/*   Updated: 2025/12/01 12:36:41 by grodrig2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

 # include<unistd.h>
 # include<stdlib.h>
 # include<stdbool.h>
 # include<limits.h>
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

int	ft_safe_atoi( char *str, bool *error);
char	**ft_split_args(char *str);
void	ft_free_split(char **split);
char	**ft_parse_input(int argc, char **argv);

t_list	*new_node(int data);
t_list    *last_node(t_list *lst);
int	list_size(t_list *lst);
void	free_list(t_list *lst);

#endif