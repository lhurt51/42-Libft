/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 16:25:13 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/22 16:25:15 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned count;

	count = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (count < len && src[count] != '\0')
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
