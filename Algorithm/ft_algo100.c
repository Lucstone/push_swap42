/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo100.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:44:43 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/26 19:34:26 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*t_stack	*ft_lastp(t_stack *temp)
{

	while (temp->lists.lista-> next != NULL)
		temp->lists.lista = temp->lists.lista ->next;
		return (*temp);
}*/

t_data	ft_100n(t_data *pl)
{
	/*int	i;
	int j;
	int k;
	int l;
	t_stack	*temp;

	i = 0;
	temp = pl->lists.lista;
	while (temp -> next != NULL)
	{
		i = i + temp->value;
		temp = temp->next;
	}
	i = i + temp->value;
	printf("la valeur de la somme de temp == %d\n", i);
	j = temp-> value;
	printf("la valeur du dernier element de temp == %d\n", i);
	while (pl->lists.lista ->next != NULL)
	{
	k = pl->lists.lista->value;
	printf("la valeur du dernier element de temp == %d\n", k);
	l = pl->lists.lista->next->value;
	printf("la valeur du dernier element de temp == %d\n", l);

		if ((pl->lists.lista->value) < (pl->lists.lista ->next -> value))
			printf("la valeur du dernier element de temp == %d\n", i);
			ft_swap(pl->lists.lista,"sa");
		temp = pl;
		ft_lastp(temp);
		if ((pl->lists.lista->value) < j)
			ft_rotate(pl->lists.lista, "ra");
		if (pl->lists.lista -> value > (i / 2))
			ft_push_b(pl);
	}
	while (list_length(pl->lists.lista) != 3)
	{
		pl->lists.lista = ft_lstisloz(pl->lists.lista);
		ft_push_b(pl);
	}
	pl->lists.lista = ft_3n(pl->lists.lista);
	while (list_length(pl->lists.listb) != 0)
		ft_push_a(pl);
	while(!((ft_order2(pl->lists.lista)) && (ft_isempty(pl->lists.listb))))
		ft_100n(pl);*/
	return (*pl);
}