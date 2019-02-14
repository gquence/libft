/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:07:30 by gquence           #+#    #+#             */
/*   Updated: 2019/02/12 22:02:34 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if ((int)size < 0)
		return (NULL);
	if (!(s = (char *)malloc(sizeof(*s) * (size + 1))))
		return (NULL);
	while ((size + 1))
	{
		s[size] = '\0';
		size--;
	}
	return (s);
}
