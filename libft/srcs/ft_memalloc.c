/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 16:18:23 by gquence           #+#    #+#             */
/*   Updated: 2018/11/30 17:13:14 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;

	s = malloc(size);
	if (s)
		s= ft_memset(s, 0, size);
	return (s);
}
