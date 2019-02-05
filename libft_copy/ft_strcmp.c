/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:09:34 by gquence           #+#    #+#             */
/*   Updated: 2019/02/05 20:41:13 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s2++;
		s1++;
	}
	if (*s1)
		if ((int)*s1 > 0)
			return (*s1);
		else
			return (-(*s1));
	else if (*s2)
		if ((int)*s2 > 0)
			return (-(*s2));
		else
			return (*s2);
	else
		return (0);
}
