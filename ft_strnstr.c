/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 21:11:00 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/25 21:11:02 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (big[i] == little[i] && big[i] == '\0')
		return((char*)&big[i]);
	while (big[i] != '\0' && i <= len)
	{
		j = i;
		while(big[j] == little[j - i] && big[j] != '\0' && j < len)
			j++;
		if(little[j - i] == '\0')
		{
			return ((char*)&big[i]);
		}
		i++;
	}
	return (NULL);
}
