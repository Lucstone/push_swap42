/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:26 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/31 23:24:53 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*pop_stack(t_stack *st)
{
	t_stack	*element;

	if (ft_isempty(st))
		return (st);
	element = st;
	if (element == NULL)
	{
		exit (EXIT_FAILURE);
	}
	element = st -> next;
	free(st);
	st = NULL;
	return (element);
}

void	print_stack(t_stack *st)
{
	if (ft_isempty(st))
	{
		return ;
	}
	while (!ft_isempty(st))
	{
		ft_printf("[%d]\n", st->value);
		st = st->next;
	}
}

int	top_stack(t_stack *st)
{
	if (ft_isempty(st))
	{
		ft_printf("Aucun sommet la piste est vide. \n");
		return (EXIT_FAILURE);
	}
	return (st -> value);
}

int	list_length(t_stack *li)
{
	int	length;

	length = 0;
	if (!ft_isempty(li))
	{
		while (li != NULL)
		{
			length++;
			li = li->next;
		}
	}
	return (length);
}

t_stack	*clear_stack(t_stack *st)
{
	while (!ft_isempty(st))
		st = pop_stack(st);
	return (new_stack());
}
