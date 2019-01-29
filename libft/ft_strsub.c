/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:12:34 by gquence           #+#    #+#             */
/*   Updated: 2019/01/29 18:12:40 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sbuf;

	str = (char *)malloc(sizeof(char) * (len + 1));
	sbuf = str;
	while (s[start] && len--)
	{
		*str++ = s[start];
		start++;
	}
	*str = 0;
	return (sbuf);
}
