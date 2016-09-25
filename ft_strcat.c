/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 17:00:08 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/22 17:00:10 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int i;
	unsigned int j;
	char *tmp;

	j = 0;
	tmp = (char*)malloc(sizeof(char) * ft_strlen(s1));
	ft_strcpy(tmp, s1);
	s1 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	ft_strcpy(s1, tmp);
	free(tmp);
	i = (ft_strlen(s1));
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return(s1);
}
