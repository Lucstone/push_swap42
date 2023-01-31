/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:44:43 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/31 20:27:53 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_data	ft_h(t_data *lst, int i, int j)
{
	if (i > (list_length(lst->lists.listb) / 2))
	{
		while (j != lst->lists.listb->value)
		{
			ft_revrotateb(lst, "rrb\n");
			i--;
		}
	}
	else if (i <= (list_length(lst->lists.listb) / 2))
	{
		while (j != lst->lists.listb->value)
		{
			ft_rotate(lst->lists.listb, "rb\n");
			i++;
		}
	}
	return (*lst);
}

t_data	ft_lstishigt(t_data *lst)
{
	int		j;
	int		i;
	t_stack	*temp;

	temp = lst->lists.listb;
	j = -2147483648;
	i = 0;
	while (temp)
	{
		if (temp->value > j)
		{
			j = temp->value;
		}
		temp = temp->next;
	}
	temp = lst->lists.listb;
	while (temp ->value != j)
	{
		temp = temp->next;
		i++;
	}
	return (ft_h(lst, i, j));
}

t_data	ft_100n(t_data *pl, int i, int *tab, int j)
{
	int	k;
	int	l;

	k = 0;
	j = i + 1;
	l = 0;
	k = pl->lists.lista->value;
	while (l < (i - 10))
	{
		while (j > 0)
		{
			if (k >= tab[l] && k <= tab[l + 9])
				ft_push_b(pl);
			else if (!(k <= tab[l] && k >= tab[l + 9]))
				ft_rotate(pl->lists.lista, "ra\n");
			j--;
			k = pl->lists.lista->value;
		}
		l = l + 9;
		j = list_length(pl->lists.lista);
	}
	l = list_length(pl->lists.lista);
	endfunction(pl, l);
	return (*pl);
}

	/*while (l > 0)
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
	}*/