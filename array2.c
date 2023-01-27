/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:03:58 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/27 19:04:01 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_l2(t_data *lst, int i, int j)
{
	if (i > (list_length(lst->ltemp.listc) / 2))
	{
		while (j != lst->ltemp.listc->value)
		{
			ft_revrotatea2(lst);
			i--;
		}
	}
	else if (i <= (list_length(lst->ltemp.listc) / 2))
	{
		while (j != lst->ltemp.listc->value)
		{
			ft_rotate(lst->ltemp.listc, "");
			i++;
		}
	}
	return (*lst);
}

t_data	ft_lstisloz2(t_data *lst)
{
	int		j;
	int		i;
	t_stack	*temp;

	temp = lst->ltemp.listc;
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
	temp = lst->ltemp.listc;
	while (temp ->value != j)
	{
		temp = temp->next;
		i++;
	}
	return (ft_l2(lst, i, j));
}

t_data	ft_ar(t_data *pile, int i)
{
	while (i > 0)
	{
		ft_lstisloz2(pile);
		ft_push_d(pile);
		i = list_length(pile->ltemp.listc);
	}
	i = list_length(pile->ltemp.listd);
	while (i > 0)
	{
		ft_push_c(pile);
		i = list_length(pile->ltemp.listd);
	}
	return (*pile);
}

int	*tab1(int ac, char **av, int *tab, int i)
{
	t_data	pile;
	t_data	temp;
	int		tmp;

	tmp = 0;
	pile.ltemp.listc = NULL;
	pile.ltemp.listd = new_stack();
	while (i < ac)
	{
		tmp = ft_atoi(av[i]);
		pile.ltemp.listc = push_back_list(pile.ltemp.listc, tmp);
		i++;
	}
	ft_ar(&pile, i);
	temp.ltemp.listc = pile.ltemp.listc;
	i = 0;
	while (pile.ltemp.listc)
	{
		tab[i] = pile.ltemp.listc->value;
		pile.ltemp.listc = pile.ltemp.listc-> next;
		i++;
	}
	pile.ltemp.listc = clear_stack(temp.ltemp.listc);
	pile.ltemp.listd = clear_stack(pile.ltemp.listd);
	return (tab);
}
