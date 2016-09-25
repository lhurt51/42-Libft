/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 11:21:32 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/23 11:21:34 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	char *tmp;

	j = 0;
	tmp = (char*)malloc(sizeof(char) * ft_strlen(dst));
	ft_strcpy(tmp, dst);
	dst = (char*)malloc(sizeof(char) * (ft_strlen(dst) + size));
	ft_strcpy(dst, tmp);
	free(tmp);
	i = (ft_strlen(dst));
	while (src[j] != '\0' && j < size)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));	
}
