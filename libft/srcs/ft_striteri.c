/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 20:41:41 by gquence           #+#    #+#             */
/*   Updated: 2018/11/30 20:45:00 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_striteri(char *s, void (*f)(unsigned in, char *))
{
	int i;

	if (!f)
		return ;
	i = 0;
	while (*s++)
		i++;
	while (i--)
		f(i, &s[i]);
}
