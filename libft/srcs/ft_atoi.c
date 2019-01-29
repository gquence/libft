/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:33:53 by gquence           #+#    #+#             */
/*   Updated: 2019/01/29 17:33:54 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(const char *str)
{
	int res;

	res = 0;
	while (*str == ' ')
		str++;
	if (*str == '-')
	{
		res = -res;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		if (res >= MAX_INT)
			return (MAX_INT);
		if (res <= MIN_INT)
			return (MIN_INT);
		str++;
	}
	return (res);
}
