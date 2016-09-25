/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 10:35:11 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/22 10:35:12 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned count;

	count = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (src[count] != '\0')
	{
		dst[count] = src[count];
		count++;
	}
	while (dst[count] != '\0')
	{
		dst[count] = '\0';
		count++;
	}
	dst[count] = '\0';
	return (dst);
}
