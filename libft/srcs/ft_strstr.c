/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:14:43 by gquence           #+#    #+#             */
/*   Updated: 2019/01/29 18:12:23 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *sbuf2;

	sbuf2 = (char *)needle;
	while (*haystack)
	{
		while (*(char *)haystack == *sbuf2 && *haystack && *sbuf2)
		{
			haystack++;
			sbuf2++;
		}
		if (*sbuf2 != 0)
			sbuf2 = (char *)needle;
		else
			return ((char *)haystack - (sbuf2 - (char *)needle));
		haystack++;
	}
	return (NULL);
}
