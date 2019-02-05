/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:09:45 by gquence           #+#    #+#             */
/*   Updated: 2019/01/29 18:10:40 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*buf;

	if (*s == '\n' || *s == '\t' || *s == ' ')
		s++;
	if (s[ft_strlen(s)] == '\t' || s[ft_strlen(s)] == '\n'\
	|| s[ft_strlen(s)] == ' ')
		str = (char *)malloc(sizeof(*str) * ft_strlen(s));
	else
		str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	buf = str;
	while (*s)
	{
		if ((*s == '\n' || *s == '\t' || *s == ' ')\
		&& !(*(s + 1)))
			break ;
		*str++ = (char)*s++;
	}
	*str = 0;
	return (buf);
}
