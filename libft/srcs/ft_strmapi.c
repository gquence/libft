/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 20:59:54 by gquence           #+#    #+#             */
/*   Updated: 2018/11/30 21:00:52 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char 	*buf;
	char	*b;

	buf = (char *)malloc(sizeof(s));
	b = buf;
	if (!f)
		return (NULL);
	while (*s)
	{
		*buf = f(buf - b,*s);
		buf++;
		s++;
	}
	*buf = 0;
	return (b);
}
