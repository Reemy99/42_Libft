/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:12:36 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:14:24 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//the new here that we use the 'f' inside our function
//but the output still the same didnt change
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
