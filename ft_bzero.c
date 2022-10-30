/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:11:34 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 15:00:25 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Sets everything to zero
#include "libft.h"

void	ft_bzero(void *str, size_t num)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (i < num)
	{
		s[i] = 0;
		i++;
	}
}
