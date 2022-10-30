/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:27:13 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/16 19:25:14 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fuction trim the string I want to trim it if it was white spaces or chars.
//I need to read the str from the start to the end;
//handle the error if the str was empty || the set I need to cut it empty 
#include "libft.h"

char	ft_readchar(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *str1, char const *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!str1 || !set)
		return (0);
	start = 0;
	while (str1[start] && ft_readchar(str1[start], set))
		start++;
	end = ft_strlen(str1);
	while (end > start && ft_readchar(str1[end -1], set))
	end--;
	new = (char *)malloc(sizeof(*str1) * (end - start + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (start < end)
		new[i++] = str1[start++];
	new[i] = '\0';
	return (new);
}
