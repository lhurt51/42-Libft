/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 11:56:21 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/24 11:56:23 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t count;
	char *d;
	char *s;

	d = (char*)dst;
	s = (char*)src;
	count = 0;
	if (d == NULL || s == NULL)
		return (NULL);
	while (count < n)
	{
		d[count] = s[count];
		if (d[count] == c)
			return (d);
		count++;
	}
	return (dst);
}
