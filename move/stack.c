/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:23:26 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/31 23:10:03 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*new_stack(void)
{
	return (NULL);
}

int	ft_isempty(t_stack *st)
{
	if (st == NULL)
		return (1);
	return (0);
}

t_stack	*push_back_list(t_stack *st, int x)
{
	t_stack	*element;
	t_stack	*temp;

	element = malloc(sizeof(t_stack));
	if (element == NULL)
	{
		exit(EXIT_FAILURE);
	}
	element -> value = x;
	element -> next = NULL;
	if (ft_isempty(st))
		return (element);
	temp = st;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = element;
	return (st);
}

t_stack	*push_front_list(t_stack *li, int x)
{
	t_stack	*element;

	element = malloc(sizeof(*element));
	if (element == NULL)
	{
		exit(EXIT_FAILURE);
	}
	element->value = x;
	if (ft_isempty(li))
		element -> next = NULL;
	else
		element -> next = li;
	return (element);
}

t_stack	*pop_back_list(t_stack *li)
{
	t_stack	*temp;
	t_stack	*before;

	if (ft_isempty(li))
		return (new_stack());
	if (li -> next == NULL)
	{
		free(li);
		li = NULL;
		return (new_stack());
	}
	temp = li;
	before = li;
	while (temp->next != NULL)
	{
		before = temp;
		temp = temp->next;
	}
	before -> next = NULL;
	free(temp);
	temp = NULL;
	return (li);
}
