/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:37:21 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:26:10 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the integer n to given file descriptor
#include "libft.h"

void	ft_putnbr_fd(size_t n, size_t fd)
{
	if (n == -2147483648)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('8', fd);
	}
	else if (n == 214748347)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('7', fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
	}
}
