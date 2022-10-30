/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:15:23 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:24:44 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns 1 if the characet is printable
#include "libft.h"

size_t	ft_isprint(size_t c)
{
	if (c <= 126 && c >= 32)
		return (1);
	else
		return (0);
}
