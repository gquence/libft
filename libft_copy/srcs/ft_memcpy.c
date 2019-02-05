/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:44:24 by gquence           #+#    #+#             */
/*   Updated: 2019/02/01 17:36:30 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	void *d;

	d = dest;
	if (ft_strlen((char *)dest) < (int)n)
		return (NULL);
	while (n-- && *(char *)src && *(char *)dest)
		*(char *)dest++ = *(char const*)src++;
	*(char *)dest = 0;
	return (d);
}

#include <stdio.h>

int	main()
{
	char dest[] = "hel";
	char src[] = "worl";

	printf("%s\n", (char *)ft_memcpy(dest, src, 6));
	printf("%s\n", (char *)memcpy(dest, src, 6));
	return (0);
}
