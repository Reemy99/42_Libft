/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:14:24 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:22:50 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks whether the string has alphabets and numbers; if true returns 1
#include "libft.h"

size_t	ft_isalnum(size_t value)
{
	size_t	nb;

	nb = 1;
	if ((value >= 'A' && value <= 'Z') || (value >= 'a' && value <= 'z'))
		return (nb);
	else if (value >= '0' && value <= '9')
		return (nb);
	else
		return (0);
}
