/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:14:47 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:24:28 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Returns 1 if c is an ASCII character; otherwise, zero
#include "libft.h"

size_t	ft_isascii(size_t value)
{
	return (value >= 0 && value <= 127);
}
