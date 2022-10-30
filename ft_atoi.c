/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:20:43 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:17:29 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t	ft_atoi(const char *str)
{
	size_t			i;
	long long		result;
	size_t			sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign == -1 && (result) * sign <= LLONG_MIN / 10)
			return (0);
		if (result >= LLONG_MAX / 10)
			return (-1);
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
