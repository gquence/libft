/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 19:07:30 by gquence           #+#    #+#             */
/*   Updated: 2018/11/30 19:36:06 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if (size <= 0)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (size + 1));
	while ((size + 1))
	{
		s[size] = '\0';
		size--;
	}
	return (s);
}
