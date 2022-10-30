/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:36:54 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:20:10 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//the subsrtr copy the string from given "start"
//handle all the error:
//1) if the str was empty return NULL.
//2) if the start char >= the len of the string.
//3) if the end >= the len of the string return all the string
//4) then allocates memory with malloc to the string that we looking for.
#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	if (len > ft_strlen(str))
		len = ft_strlen(str);
	if (start >= ft_strlen(str))
			len = 0;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (i < (int)len)
	{
		*(new + i) = *(str + start);
		str++;
		i++;
	}
	*(new + i) = '\0';
	return (new);
}
