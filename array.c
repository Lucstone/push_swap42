/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:10:38 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/27 17:44:07 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_data	ft_revrotatea2(t_data *lsta)
{
	t_stack	*temp;

	if (ft_isempty(lsta->ltemp.listc))
		return (*lsta);
	temp = lsta->ltemp.listc;
	while (temp -> next != NULL)
		temp = temp -> next;
	lsta->ltemp.listc = pop_back_list(lsta->ltemp.listc);
	lsta->ltemp.listc = push_front_list(lsta->ltemp.listc, temp -> value);
	return (*lsta);
}

t_data	ft_push_d(t_data	*piles)
{
	int		sav;

	if (ft_isempty(piles->ltemp.listc))
		return (*piles);
	sav = 0;
	sav = piles->ltemp.listc->value;
	piles->ltemp.listd = push_front_list(piles->ltemp.listd, sav);
	piles->ltemp.listc = pop_stack(piles->ltemp.listc);
	return (*piles);
}

t_data	ft_push_c(t_data	*piles)
{
	int		sav;

	if (ft_isempty(piles->ltemp.listd))
		return (*piles);
	sav = 0;
	sav = piles->ltemp.listd->value;
	piles->ltemp.listc = push_front_list(piles->ltemp.listc, sav);
	piles->ltemp.listd = pop_stack(piles->ltemp.listd);
	return (*piles);
}
