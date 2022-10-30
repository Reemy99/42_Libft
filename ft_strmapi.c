/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 21:10:29 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:19:48 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//same rot1 , but we used 'f' function
//it works on string
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	index;

	if (!s || !f)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new)
		return (NULL);
	index = 0;
	while (s[index])
	{
		new[index] = f(index, s[index]);
		++index;
	}
	new[index] = '\0';
	return (new);
}

char	f(unsigned int i, char c)
{
	char	str;

	i = 2;
	str = c + i;
	return (str);
}
