/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:06:41 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:19:20 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//28 L||we count the first word
//30 L||check if the first and second char is not == '\0'

#include "libft.h"

size_t	ft_readwords(char const *str, char c)
{
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			word++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (word);
}

size_t	ft_wordlen(char const *str, char c)
{
	size_t	i;
	int		length;

	length = 0;
	i = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}

char	**ft_split2(char const *str, char c, char **mem)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = -1;
	j = 0;
	mem = (char **)malloc(sizeof(char *) * (ft_readwords(str, c) + 1));
	if (!mem)
		return (NULL);
	while (ft_readwords(str, c) > ++i)
	{
		k = 0;
		while (str[j] == c && str[j] != '\0')
			j++;
		mem[i] = (char *)malloc(sizeof(char) * ft_wordlen(&str[j], c) + 1);
		if (!mem[i])
			return (NULL);
		while (str[j] != c && str[j] != '\0')
		{
			mem[i][k++] = str[j++];
		}
		mem[i][k] = '\0';
	}
	mem[i] = 0;
	return (mem);
}

char	**ft_split(char const *str, char c)
{
	char	**mem;

	mem = NULL;
	if (!str)
		return (NULL);
	return (ft_split2(str, c, mem));
}
