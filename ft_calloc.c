/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:00:20 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/16 18:56:03 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates memory for an arry of count objects of size and initializes 
//all bytes in the allocated storage to zero 

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (size && count > LLONG_MAX)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
