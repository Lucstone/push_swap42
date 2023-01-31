/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:56:28 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/31 20:56:04 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_norm(t_data pile, char **av, int i, int ac)
{
	int	*tab;

	if (ft_order(pile.lists.lista) == 0)
	{
		pile.lists.lista = clear_stack(pile.lists.lista);
		pile.lists.listb = clear_stack(pile.lists.listb);
		exit (EXIT_FAILURE);
	}
	tab = malloc(sizeof(int) * i);
	tab1(ac, av, tab, 1);
	i = list_length(pile.lists.lista);
	if (i == 3)
		ft_3n(&pile);
	if (i >= 4 && i <= 5)
		ft_5n(&pile);
	if (i > 5 && i <= 100)
		ft_100n(&pile, i - 1, tab, 0);
	if (i > 100)
		ft_500n(&pile, i - 1, tab, 0);
	free (tab);
	return (pile);
}

int	main(int ac, char **av)
{
	t_data	pile;
	int		tmp;
	int		i;

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
	ft_norm(pile, av, i, ac);
	pile.lists.lista = clear_stack(pile.lists.lista);
	pile.lists.listb = clear_stack(pile.lists.listb);
	return (0);
}

	/*if (ft_order(pile.lists.lista) == 0)
	{
		pile.lists.lista = clear_stack(pile.lists.lista);
		pile.lists.listb = clear_stack(pile.lists.listb);
		return (0);
	}
	tab = malloc(sizeof(int) * i);
	tab1(ac, av, tab, 1);
	i = list_length(pile.lists.lista);
	if (i == 3)
		ft_3n(&pile);
	if (i >= 4 && i <= 5)
		ft_5n(&pile);
	if (i > 5 && i <= 100)
		ft_100n(&pile, i - 1, tab, 0);
	if (i > 100)
		ft_500n(&pile, i - 1, tab, 0);*/