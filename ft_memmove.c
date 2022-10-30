/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:34:10 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:16:59 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//the ft_memmove functiom it's the same ft_memcpy but for overlapping
//memory blocks memmove()
//is a safer than memcpy()
// And we start printing in revers way.
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	size_t	loc;

	i = 0;
	if (!src && !dest)
		return (dest);
	else if (dest < src)
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			loc = len - 1 - i;
			((unsigned char *)dest)[loc] = ((unsigned char *)src)[loc];
			i++;
		}
	}
	return (dest);
}
