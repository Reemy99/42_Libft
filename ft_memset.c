/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:28:56 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:13:52 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Fills the block of memory or the string to a particular value
/*the num is the character in ascii*/
#include "libft.h"

void	*ft_memset(void *str, int num, size_t len)
{
	char	*ptr;

	ptr = (char *)str;
	while (len > 0)
	{
		ptr[len - 1] = num;
		len --;
	}
	return (str);
}
