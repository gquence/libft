/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:43:47 by gquence           #+#    #+#             */
/*   Updated: 2019/01/29 17:43:48 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*c;
	size_t	s2_pos;

	if (!haystack || !needle || !n)
		return (NULL);
	c = (char *)needle;
	while (*haystack && n)
	{
		s2_pos = 0;
		while (*needle && *haystack == *needle)
		{
			s2_pos++;
			haystack++;
			needle++;
		}
		while (s2_pos--)
			haystack--;
		if (*needle == 0)
			return ((char *)haystack);
		else
			needle = c;
		haystack++;
		n--;
	}
	return (NULL);
}
