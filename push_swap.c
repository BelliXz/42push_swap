/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paradari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:17:55 by paradari          #+#    #+#             */
/*   Updated: 2024/03/04 15:18:13 by paradari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = (nb * 10) + (str[i++] - '0');
		else
			return (0);
	}
	return (nb * neg);
}

t_intlst	*atointlst(t_intlst list, char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (ft_atoi(argv[i]))
			addtolist;
		else
			break;
	}
}

void	push_swap(int argc, char *argv)
{
	t_intlst	list;

	list = atointlst(list, argv);
}