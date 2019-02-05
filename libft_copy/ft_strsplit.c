/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:06:16 by gquence           #+#    #+#             */
/*   Updated: 2019/02/01 15:25:39 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_strlen_ch(char const *s, char c)
{
	int		res;

	res = 0;
	while (*s != c && *s++)
		res++;
	return (res);
}

static int		ft_split_count(char const *s, char c)
{
	int		i;

	i = 1;
	while (*s)
	{
		if (!ft_strlen_ch(s, c))
		{
			s++;
			continue;
		}
		else if (ft_strlen_ch(s, c) == ft_strlen(s))
		{
			i++;
			return (i);
		}
		else
		{
			i++;
			while (ft_strlen_ch(s, c))
				s++;
		}
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**strs;
	char	**buf;
	char	*s_buf;

	strs = (char **)malloc(sizeof(char *) * ft_split_count(s, c));
	buf = strs;
	while (*s)
	{
		if (!ft_strlen_ch(s, c))
		{
			s++;
			continue ;
		}
		*strs = malloc(sizeof(char) * (ft_strlen_ch(s, c) + 1));
		s_buf = *strs;
		while (ft_strlen_ch(s, c))
			*s_buf++ = *s++;
		*s_buf = 0;
		strs++;
	}
	*strs = NULL;
	return (buf);
}
