/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:36:33 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:19:53 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char)str1[i] != '\0')
		&& ((unsigned char)str1[i] == (unsigned char)str2[i]) && i < (n - 1))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
