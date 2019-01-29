/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:44:24 by gquence           #+#    #+#             */
/*   Updated: 2019/01/29 16:45:05 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	void *d;

	d = dest;
	while (n--)
		*(char *)dest++ = *(char const*)src++;
	if (!(*(char *)dest))
		*(char *)dest = 0;
	return (d);
}
