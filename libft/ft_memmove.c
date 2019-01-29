/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:41:11 by gquence           #+#    #+#             */
/*   Updated: 2019/01/29 16:50:31 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (sizeof(dest) > len)
		return (ft_memcpy(dest, src, len));
	return (ft_memcpy(dest, src, ft_strlen(dest)));
}
