/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:43:28 by gquence           #+#    #+#             */
/*   Updated: 2019/02/05 21:02:21 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s2++;
		s1++;
		n--;
	}
	if (n == 0)
		return (0);
	else if (*s1)
		if ((int)*s1 > 0)
			return (*s1);
		else
			return (-(*s1));
	else if (*s2)
		if ((int)*s2 > 0)
			return (-*(s2));
		else
			return (*s2);
	else
		return (0);
}
