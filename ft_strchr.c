/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:50:30 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:25:06 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//looking for a char in my str
#include<stdio.h>
#include "libft.h"

char	*ft_strchr(const char *str, size_t c)
{
	while (*str != '\0' && (unsigned char)c != *str)
		str++;
	if ((unsigned char)c == *str)
		return ((char *)str);
	else
		return (NULL);
}
