/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:57:51 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:14:49 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Looks for a string inside a source string and returns the string 
//if found inside the source string
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *to_find, size_t len)
{
	size_t	i;
	size_t	x;

	if (*to_find == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	i = 0;
	while (haystack[i] && i <= len)
	{
		if (haystack[i] == to_find[0])
		{
			x = 0;
			while ((haystack[i + x] == to_find[x]) && (i + x < len))
			{
				if (to_find[x + 1] == '\0')
					return ((char *) &haystack[i]);
				x++;
			}
		}
		i++;
	}
	return (0);
}
