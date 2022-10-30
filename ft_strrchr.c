/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:44:33 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:25:17 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Looks for a specific character but the last character inside that string
//and returns that character/string
#include "libft.h"

char	*ft_strrchr(const char *str, size_t c)
{
	size_t	i;

	i = ft_strlen(str);
	while (str[i] != '\0' && (unsigned char) c != str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (unsigned char) c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
