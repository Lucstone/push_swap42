/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:44:08 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/27 16:50:58 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_rotate_rr2(t_stack *lsta)
{
	int	temp;

	if (ft_isempty(lsta))
		return (lsta);
	while (lsta -> next != NULL)
	{
		if (lsta)
		{
			temp = lsta->value;
			lsta->value = lsta -> next-> value;
			lsta -> next -> value = temp;
		}
		lsta = lsta -> next;
	}
	return (lsta);
}

t_data	ft_rotate_rr(t_data piles)
{
	if (ft_isempty(piles.lists.lista) || ft_isempty(piles.lists.listb))
		return (piles);
	ft_rotate_rr2(piles.lists.lista);
	ft_rotate_rr2(piles.lists.listb);
	ft_printf ("rr\n");
	return (piles);
}

t_data	ft_revrotatea(t_data *lsta, char *str)
{
	t_stack	*temp;

	if (ft_isempty(lsta->lists.lista))
		return (*lsta);
	temp = lsta->lists.lista;
	while (temp -> next != NULL)
		temp = temp -> next;
	lsta->lists.lista = pop_back_list(lsta->lists.lista);
	lsta->lists.lista = push_front_list(lsta->lists.lista, temp -> value);
	ft_printf ("%s", str);
	return (*lsta);
}

t_data	ft_revrotateb(t_data *lstb, char *str)
{
	t_stack	*temp;

	if (ft_isempty(lstb->lists.listb))
		return (*lstb);
	temp = lstb->lists.listb;
	while (temp -> next != NULL)
		temp = temp -> next;
	lstb->lists.listb = pop_back_list(lstb->lists.listb);
	lstb->lists.listb = push_front_list(lstb->lists.listb, temp -> value);
	ft_printf ("%s", str);
	return (*lstb);
}

t_data	ft_rrotate_rrr(t_data *piles)
{
	if (ft_isempty(piles->lists.lista) || ft_isempty(piles->lists.listb))
		return (*piles);
	*piles = ft_revrotatea(piles, "");
	*piles = ft_revrotateb(piles, "");
	ft_printf ("rrr\n");
	return (*piles);
}
