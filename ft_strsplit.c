/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhurt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 19:00:52 by lhurt             #+#    #+#             */
/*   Updated: 2016/09/26 19:00:54 by lhurt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*word_builder(char const *str, char c, unsigned int *index)
{
	unsigned i;
	unsigned start;
	unsigned end;
	char *word;

	i = *index;
	while (str[i] == c)
		i++;
	start = i;
	while (str[i] != c && str[i] != '\0')
		i++;
	end = i;
	*index = i;
	word = ft_strnew(end - start);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	unsigned i;
	unsigned j;
	unsigned words;
	char	**rtn;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i + 1] == c)
			words++;
		i++;
	}
	i = 0;
	j = 0;
	rtn = (char**)malloc(sizeof(char*) * (words + 1));
	if (!rtn)
		return (NULL);
	while (i < words)
	{
		rtn[i] = word_builder(s, c, &j);
		i++;
	}
	rtn[i] = 0;
	return (rtn);
}
