/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:14:40 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:25:36 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts integers to string literal
//in 54 L|| make the end of the arry == '\0'
//it work in revers way
#include "libft.h"

size_t	ft_itoa_size(int n)
{
	size_t	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		size++;
	}
	if (n == 0)
		return (1);
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char	*ft_itoa(size_t n)
{
	char		*str;
	size_t		size;
	long long	nb;

	nb = n;
	size = ft_itoa_size(nb);
	str = malloc(sizeof(char) * size + 1);
	if (nb == 0)
		str[0] = '0';
	if (!str || str == NULL)
		return (NULL);
	str[size] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	size--;
	while (nb)
	{
		str[size] = (((nb % 10)) + '0');
		size--;
		nb = nb / 10;
	}
	return (str);
}
