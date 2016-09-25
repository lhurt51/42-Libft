/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 12:20:26 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/24 12:20:28 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t count;
	size_t end;
	char *tmp;
	char *d;
	char *s;

	d = (char*)dst;
	s = (char*)src;
	tmp = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	count = 0; 
	if ((s == NULL) || (d == NULL))
		return (NULL);
	while (count < len)
	{
		tmp[count] = s[count];
		count++;
	}
	end = count * 2;
	while (count > 0)
	{
		count--;
		d[count] = tmp[count];
	}
	free(tmp);
	return (dst);
}
