/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:14:06 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:24:00 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function isdigit() takes a single argument in the form of an integer
//and returns the value of type int
#include "libft.h"

size_t	ft_isdigit(size_t nb)
{
	size_t	result;

	result = 1;
	if (nb >= '0' && nb <= '9')
		return (result);
	else
		return (0);
}
