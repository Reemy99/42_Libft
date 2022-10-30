/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:18:21 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:02:36 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns both the source and destination string concatination,
//but with restrictions
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (destsize == 0 && dest == NULL)
		return (0);
	while (dest[i] != '\0' && i < destsize)
		i++;
	x = i;
	while (src[i - x] != '\0' && i + 1 < destsize)
	{
		dest[i] = src[i - x];
		i++;
	}
	if (x < destsize)
	dest[i] = '\0';
	return (x + ft_strlen(src));
}
