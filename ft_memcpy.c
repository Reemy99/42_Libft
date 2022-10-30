/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:48:34 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:09:35 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies all the data from the source to the destination
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
