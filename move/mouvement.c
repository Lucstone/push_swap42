/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:44:08 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/26 15:48:34 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_swap(t_stack *lsta, char *str)
{
	int		temp;

	if (list_length(lsta) <= 1)
		return (lsta);
	temp = lsta->value;
	lsta->value = lsta -> next-> value;
	lsta -> next -> value = temp;
	ft_printf ("%s\n", str);
	return (lsta);
}

t_data	ft_swap_ss(t_data *piles)
{
	int		temp;
	int		temp2;

	if (list_length(piles->lists.lista) <= 1)
		return (*piles);
	if (list_length(piles->lists.listb) <= 1)
		return (*piles);
	temp = piles->lists.lista->value;
	piles->lists.lista->value = piles->lists.lista -> next-> value;
	piles->lists.lista -> next -> value = temp;
	temp2 = piles->lists.listb->value;
	piles->lists.listb->value = piles->lists.listb -> next-> value;
	piles->lists.listb -> next -> value = temp2;
	ft_printf ("ss\n");
	return (*piles);
}

t_data	ft_push_b(t_data	*piles)
{
	int		sav;

	if (ft_isempty(piles->lists.lista))
		return (*piles);
	sav = 0;
	sav = piles->lists.lista->value;
	piles->lists.listb = push_front_list(piles->lists.listb, sav);
	piles->lists.lista = pop_stack(piles->lists.lista);
	ft_printf("pb\n");
	return (*piles);
}

t_data	ft_push_a(t_data	*piles)
{
	int		sav;

	if (ft_isempty(piles->lists.listb))
		return (*piles);
	sav = 0;
	sav = piles->lists.listb->value;
	piles->lists.lista = push_front_list(piles->lists.lista, sav);
	piles->lists.listb = pop_stack(piles->lists.listb);
	ft_printf("pa\n");
	return (*piles);
}

t_stack	*ft_rotate(t_stack *lsta, char *str)
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
	ft_printf ("%s\n", str);
	return (lsta);
}
