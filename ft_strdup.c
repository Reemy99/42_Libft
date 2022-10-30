/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:32:36 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:14:20 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function returns a pointer to a null_terminated byte string,
//which of the string pointed to by src.
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*new;

	len = ft_strlen(src);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	len = 0;
	while (src[len])
	{
		new[len] = src[len];
		len++;
	}
	new[len] = '\0';
	return (new);
}
