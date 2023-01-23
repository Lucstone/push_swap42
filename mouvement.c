/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:44:08 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/23 19:05:02 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	//Attention problem de free ici a voir
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
	//Attention problem de free ici a voir
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


t_data	ft_rotate_rr(t_data piles)
{
	int		temp;
	int		temp2;
	if (ft_isempty(piles.lists.lista) || ft_isempty(piles.lists.listb))
		return (piles);
	while (piles.lists.lista -> next != NULL)
	{
		if (piles.lists.lista)
		{
			temp = piles.lists.lista->value;
			piles.lists.lista->value = piles.lists.lista -> next->value;
			piles.lists.lista -> next-> value = temp;
		}
		piles.lists.lista = piles.lists.lista -> next;
	}
	while (piles.lists.listb -> next != NULL)
	{
		if (piles.lists.listb)
		{
			temp2 = piles.lists.listb->value;
			piles.lists.listb->value = piles.lists.listb -> next-> value;
			piles.lists.listb -> next -> value = temp2;
		}
		piles.lists.listb = piles.lists.listb -> next;
	}
	ft_printf ("rr\n");
	return (piles);
}


t_data	ft_rotate_rrr(t_data piles)
{
	if (ft_isempty(piles.lists.lista) || ft_isempty(piles.lists.listb))
		return (piles);
	piles.lists.lista = ft_rrotate2(piles.lists.lista);
	piles.lists.listb = ft_rrotate2(piles.lists.listb);

	ft_printf ("rrr\n");
	return (piles);
}

t_stack	*ft_rrotate(t_stack *lsta, char *str)
{
	t_stack	*temp;
	
	if (ft_isempty(lsta))
		return (lsta);
	temp = lsta;
	while (temp -> next != NULL)
		temp = temp -> next;
	lsta = push_front_list(lsta,temp-> value);
	lsta = pop_back_list(lsta);
	ft_printf ("%s\n", str);
	return (lsta);
}

t_stack	*ft_rrotate2(t_stack *lsta)
{
	t_stack	*temp;
	
	temp = lsta;
	while (temp -> next != NULL)
		temp = temp -> next;
	lsta = push_front_list(lsta,temp-> value);
	lsta = pop_back_list(lsta);
	return (lsta);
}