/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:12:53 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:23:07 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Read the string: If there is alphabets- it should return the value of 1
#include "libft.h"

size_t	ft_isalpha(size_t l)
{
	return ((l >= 'A' && l <= 'Z') || (l >= 'a' && l <= 'z'));
}
