/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test222.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:28:29 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/20 16:56:44 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack *lista;
	t_stack *listb;
	int tmp;
	int	i;

	tmp = 0;
	i = 1;
	lista = new_stack();
	listb = new_stack();
	print_stack(lista);
	ft_printf("-\na\n");
	print_stack(listb);
	ft_printf("-\nb\n");
	/*ft_printf("Sommet actuel : %d\n", top_stack(lista));
	ft_printf("taille de la pile : %d\n", list_length(lista));*/
	ft_printf("-----------------------------\n");
	while (i < ac)
	{
		tmp = ft_atoi(av[i]);
		lista = push_back_list(lista, tmp);
		i++;
	}
	print_stack(lista);
	ft_printf("-\na\n");
	print_stack(listb);
	ft_printf("-\nb\n");
	/*ft_printf("Sommet actuel : %d\n", top_stack(lista));
	ft_printf("taille de la pile : %d\n", list_length(lista));
	ft_printf("-----------------------------\n");
	lista = pop_front_list(lista);
	print_stack(lista);
	ft_printf("Sommet actuel : %d\n", top_stack(lista));
	ft_printf("taille de la pile : %d\n", list_length(lista));
	ft_printf("-----------------------------\n");
	lista = pop_back_list(lista);
	print_stack(lista);
	ft_printf("Sommet actuel : %d\n", top_stack(lista));
	ft_printf("taille de la pile : %d\n", list_length(lista));*/
	ft_printf("-----------------------------\n");
	lista = clear_stack(lista);
	listb = clear_stack(listb);
	//ft_printf("taille de la pile : %d\n", list_length(lista));
	print_stack(lista);
	ft_printf("-\na\n");
	print_stack(listb);
	ft_printf("-\nb\n");
	return (0);
}