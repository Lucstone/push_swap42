/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:56:28 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/23 12:46:09 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_data	pile;
	int tmp;
	int	i;

	tmp = 0;
	i = 1;
	pile.lists.lista = new_stack();
	pile.lists.listb = new_stack();
	while (i < ac)
	{
		tmp = ft_atoi(av[(i)]);
		pile.lists.lista = push_back_list(pile.lists.lista, tmp);
		i++;
	}
	ft_swap_ss(&pile);
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");
	ft_rotate(pile.lists.lista, "ra");
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");
	ft_push_b(&pile);
	ft_push_b(&pile);
	ft_push_b(&pile);
	ft_push_b(&pile);
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");
	ft_rotate_rr(pile);
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	pile.lists.lista = clear_stack(pile.lists.lista);
	pile.lists.listb = clear_stack(pile.lists.listb);
	//system("leaks push_swap");
	return (0);
}