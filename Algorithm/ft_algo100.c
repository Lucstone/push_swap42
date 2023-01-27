/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:44:43 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/27 19:33:55 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_data	ft_l3(t_data *lst, int i, int j, int *tab)
{
	if (i > (list_length(lst->lists.lista) / 2))
	{
		while (j != lst->lists.lista->value)
		{
			ft_revrotatea(lst, "rra\n");
			i--;
		}
	}
	else if (i <= (list_length(lst->lists.lista) / 2))
	{
		while (j != lst->lists.lista->value)
		{
			ft_rotate(lst->lists.lista, "ra\n");
			i++;
		}
	}
	return (*lst);
}

t_data	ft_lstishigh(t_data *lst,int *tab, int i)
{
	int		j;
	t_stack	*temp;

	temp = lst->lists.lista;
	j = (i / 10) + i % 10;
	j = i - j;
	while (temp)
	{
		if (temp->value < j)
		{
			j = temp->value;
		}
		temp = temp->next;
	}
	temp = lst->lists.lista;
	while (!(temp ->value >= tab[j] && temp ->value <= tab[i]))
		temp = temp->next;
	return (ft_l3(lst, i, j, tab));
}

t_data	ft_100n(t_data *pl, int i, int *tab)
{
	int j;

	j = 0;
	j = (i / 10) + i % 10;
	printf("%d", i);
	printf("/%d/", j);
	printf("*%d*", tab[i]);

	return (*pl);
}