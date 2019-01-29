/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:51:58 by gquence           #+#    #+#             */
/*   Updated: 2019/01/29 16:53:28 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

const void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(const char *)s++ && n--)
	{
		if (*(const char *)s == c)
			return (s);
	}
	return (NULL);
}
