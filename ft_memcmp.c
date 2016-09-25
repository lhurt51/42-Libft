/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 18:13:55 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/24 18:13:57 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	int	r;
	char *str1;
	char *str2;

	str1 = (char*)s1;
	str2 = (char*)s2;
	r = 0;
	i = 0;
	while (i < n && r == 0)
	{
		if (str1[i] != str2[i])
			r = str1[i] - str2[i];
		i++;
	}
	return (r);
}
