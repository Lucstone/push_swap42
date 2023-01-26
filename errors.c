/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:56:03 by lnaidu            #+#    #+#             */
/*   Updated: 2023/01/24 17:23:02 by lnaidu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(const char *str)
{
	int		i;
	int		neg;
	long	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * neg);
}

int	ft_errornumber(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (str[c] == '-' || str[c] == '+')
			c++;
		if (!(str[c] >= 48 && str[c] <= 57))
			return (1);
		c++;
	}
	return (0);
}

long	ft_cmp(long *s, int k)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < k)
	{
		j = i + 1;
		while (j < k)
		{
			if (s[i] == s[j])
			{
				ft_printf("ERROR\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_error(int ac, char **av, int i)
{
	long	*tmp;

	tmp = malloc(sizeof(*tmp) * (ac));
	while (i < (ac))
	{
		if (ft_errornumber(av[i]))
		{
			printf("error2222");
			free (tmp);
			exit(EXIT_FAILURE);
		}
		tmp[i] = ft_atol(av[i]);
		if (tmp[i] < -2147483648 || tmp[i] > 2147483647)
		{
			printf("ERROR INT");
			free (tmp);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	if (ft_cmp(tmp, i))
		exit(EXIT_FAILURE);
	free (tmp);
	return (0);
}
