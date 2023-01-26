/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:40:20 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/26 19:30:47 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_2n(t_stack *lsta)
{
	if (lsta->value > lsta->next->value)
		ft_swap(lsta, "sa");
	return (lsta);
}

t_data	ft_3n(t_data *lsta)
{
	int	a;
	int	b;
	int	c;

	a = lsta->lists.lista->value;
	b = lsta->lists.lista->next->value;
	c = lsta->lists.lista->next->next->value;
	if ((a > b) && (b < c) && (a < c))
		ft_swap(lsta->lists.lista, "sa");
	if ((a > b) && (b > c) && (a > c))
	{
		ft_swap(lsta->lists.lista, "sa");
		ft_revrotatea(lsta, "rra\n");
	}
	if ((a > b) && (b < c) && (a > c))
		ft_rotate(lsta->lists.lista, "ra");
	if ((a < b) && (b > c) && (a < c))
	{
		ft_swap(lsta->lists.lista, "sa");
		ft_rotate(lsta->lists.lista, "ra");
	}
	if ((a < b) && (b > c) && (a > c))
		ft_revrotatea(lsta, "rra\n");
	return (*lsta);
}

t_data	ft_l(t_data *lst, int i, int j)
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
			ft_rotate(lst->lists.lista, "ra");
			i++;
		}
	}
	return (*lst);
}

t_data	ft_lstisloz(t_data *lst)
{
	int		j;
	int		i;
	t_stack	*temp;

	temp = lst->lists.lista;
	j = 2147483647;
	i = 0;
	while (temp)
	{
		if (temp->value < j)
		{
			j = temp->value;
		}
		temp = temp->next;
	}
	temp = lst->lists.lista;
	while (temp ->value != j)
	{
		temp = temp->next;
		i++;
	}
	return (ft_l(lst, i, j));
}

/*t_stack	*ft_lstishig(t_stack *lst)
{
	int	j;
	t_stack *temp;

	temp = lst;
	j = -2147483648;
	while (temp)
	{
		if (temp->value > j)
			j = temp->value;
		temp = temp->next;
	}
	printf("the biggest value is ; %d\n", j);
	return (lst);
}*/

t_data	ft_5n(t_data *pl)
{
	ft_lstisloz(pl);
	ft_push_b(pl);
	ft_lstisloz(pl);
	ft_push_b(pl);
	if (list_length(pl->lists.lista) == 3)
		ft_3n(pl);
	else if (list_length(pl->lists.lista) == 2)
		ft_2n(pl->lists.lista);
	ft_push_a(pl);
	ft_push_a(pl);
	return (*pl);
}
