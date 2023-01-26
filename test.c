/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:56:28 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/26 19:31:02 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	pile;
	int		tmp;
	int		i;

	tmp = 0;
	i = 1;
	ft_error((ac), av, 1);
	while (i < ac)
	{
		tmp = ft_atoi(av[i]);
		pile.lists.lista = push_back_list(pile.lists.lista, tmp);
		i++;
	}
	if (ft_order(pile.lists.lista) == 0)
	{
		pile.lists.lista = clear_stack(pile.lists.lista);
		pile.lists.listb = clear_stack(pile.lists.listb);
		return (0);
	}
	i = list_length(pile.lists.lista);
	if (i == 3)
		ft_3n(&pile);
	if (i >= 4 && i <= 5)
		pile = ft_5n(&pile);
	/*if (i > 5 && i <= 1000)
		pile = ft_100n(&pile);*/
	/*print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");*/
	/*ft_revrotatea(&pile, "rra\n");
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");
	ft_push_b(&pile);
	ft_push_b(&pile);
	ft_push_b(&pile);
	ft_revrotateb(&pile, "rrb\n");
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");
	ft_rrotate_rrr(&pile);
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");*/
	pile.lists.lista = clear_stack(pile.lists.lista);
	pile.lists.listb = clear_stack(pile.lists.listb);
	return (0);
}

	/*ft_swap_ss(pile);
	ft_push_b(&pile);
	ft_rotate(pile.lists.lista, "ra");
	ft_rotate(pile.lists.listb, "rb");
	ft_rotate_rr(pile);
	pile = ft_rotate_rrr(pile);
	pile.lists.lista = ft_rrrotate(pile.lists.lista, "rra");
	pile.lists.listb = ft_rrrotate(pile.lists.listb, "rrb");
	ft_swap(pile.lists.lista,"sa");
	ft_push_a(&pile);
	*/