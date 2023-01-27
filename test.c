/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:56:28 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/27 19:16:40 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_ar2(t_data *pile, int i)
{
	while (i > 0)
	{
		ft_lstisloz(pile);
		ft_push_b(pile);
		i = list_length(pile->lists.lista);
	}
	i = list_length(pile->lists.listb);
	while (i > 0)
	{
		ft_push_a(pile);
		i = list_length(pile->lists.listb);
	}
	return (*pile);
}

int	main(int ac, char **av)
{
	t_data	pile;
	int		tmp;
	int		i;
	int		*tab;

	tmp = 0;
	i = 1;
	pile.lists.lista = new_stack();
	pile.lists.listb = new_stack();
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
	tab = malloc(sizeof(int) * i);
	tab1(ac, av, tab, 1);
	printf("$%d$\n", tab[0]);
	printf("$%d$\n", tab[1]);
	printf("$%d$\n", tab[2]);
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");
	i = list_length(pile.lists.lista);
	if (i == 3)
		ft_3n(&pile);
	if (i >= 4 && i <= 5)
		ft_5n(&pile);
	if (i > 5 && i <= 100)
		ft_100n(&pile, i - 1, tab);
	print_stack(pile.lists.lista);
	ft_printf("-\na\n");
	print_stack(pile.lists.listb);
	ft_printf("-\nb\n");
	ft_printf("-----------------------------\n");
	i = 0;
	pile.lists.lista = clear_stack(pile.lists.lista);
	pile.lists.listb = clear_stack(pile.lists.listb);
	free (tab);
	system ("leaks push_swap");
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