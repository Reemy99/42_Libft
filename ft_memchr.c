/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:27:46 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:09:25 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memchr function is a String Function, which will find the first occurrence
//of the character and returns character from that position of the character
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char *)str)[i] == ((unsigned char)c))
			return ((void *)(str + i));
			i++;
	}
	return (0);
}
