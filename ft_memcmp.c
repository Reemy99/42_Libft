/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:22:41 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:18:31 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//It checks for strings and returns the difference,
//it also checks for null space
#include "libft.h"

size_t	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t	i;

	i = 0;
	if ((s1 && (s1 == s2)) || !len)
		return (0);
	while (i < len)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}
