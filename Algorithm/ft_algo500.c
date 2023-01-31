/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo500.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:44:43 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/31 20:26:30 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_data	endfunction(t_data *pl, int l)
{
	while (l > 0)
	{
		ft_push_b(pl);
		l = list_length(pl->lists.lista);
	}
	l = list_length(pl->lists.listb);
	while (l > 0)
	{
		ft_lstishigt(pl);
		ft_push_a(pl);
		l = list_length(pl->lists.listb);
	}
	return (*pl);
}

t_data	ft_500n(t_data *pl, int i, int *tab, int j)
{
	int	k;
	int	l;

	k = 0;
	l = 0;
	j = i + 1;
	k = pl->lists.lista->value;
	while (l < (i - 50))
	{
		while (j > 0)
		{
			if (k >= tab[l] && k <= tab[l + 49])
				ft_push_b(pl);
			else if (!(k <= tab[l] && k >= tab[l + 49]))
				ft_rotate(pl->lists.lista, "ra\n");
			j--;
			k = pl->lists.lista->value;
		}
		l = l + 49;
		j = list_length(pl->lists.lista);
	}
	l = list_length(pl->lists.lista);
	endfunction(pl, l);
	return (*pl);
}
