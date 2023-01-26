/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:49:21 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/26 19:34:06 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_order(t_stack *pile)
{
	int	i;
	int	j;

	if (list_length(pile) == 0 || list_length(pile) == 1)
		return (0);
	i = pile->value;
	j = pile->next->value;
	if ((list_length(pile) == 2) && (i > j))
	{
		ft_2n(pile);
		return (pile);
	}
	while (pile -> next != NULL)
	{
		i = pile->value;
		j = pile->next->value;
		if (pile)
		{
			if (i > j)
				return (pile);
		}
		pile = pile -> next;
	}
	return (0);
}

t_stack	*ft_order2(t_stack *pile)
{
	int	i;
	int	j;

	i = pile->value;
	j = pile->next->value;
	while (pile -> next != NULL)
	{
		i = pile->value;
		j = pile->next->value;
		if (pile)
		{
			if (i > j)
				return (pile);
		}
		pile = pile -> next;
	}
	return (0);
}
