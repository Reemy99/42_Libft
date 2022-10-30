/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:14:32 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:26:18 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the character c to the given file descriptor
#include "libft.h"

void	ft_putchar_fd(char c, size_t fd)
{
	write(fd, &c, 1);
}
