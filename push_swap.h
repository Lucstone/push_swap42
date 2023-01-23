/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:56:55 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/23 19:00:14 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/srclib/libft.h"
# include "./Libft/gnl/get_next_line.h"
# include "./Libft/printf/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>

typedef struct	s_stack
{
	int				value;
	struct s_stack	*next;
} 				t_stack;

typedef struct	s_pile
{
	t_stack		*lista;
	t_stack		*listb;
} 				t_pile;

typedef struct	s_data
{
	t_pile		lists;
} 				t_data;

t_stack	*new_stack(void);
int ft_isempty(t_stack *st);
void print_stack(t_stack *st);
t_stack *push_back_list(t_stack *st, int x);
t_stack *push_front_list(t_stack *li, int x);
t_stack *pop_back_list(t_stack *li);
t_stack *pop_stack(t_stack *st);
int	top_stack(t_stack *st);
int list_length(t_stack *st);
t_stack *clear_stack(t_stack *st);

/*Fonction for Mouvment rules*/
t_stack	*ft_swap(t_stack *st, char *str);
t_data	ft_push_b(t_data *piles);
t_data	ft_push_a(t_data *piles);
t_data	ft_swap_ss(t_data *piles);
t_stack	*ft_rotate(t_stack *lst, char *str);
t_data	ft_rotate_rr(t_data piles);
t_stack	*ft_rrotate(t_stack *lsta, char *str);
t_stack	*ft_rrotate2(t_stack *lsta);
t_data	ft_rotate_rrr(t_data piles);

#endif