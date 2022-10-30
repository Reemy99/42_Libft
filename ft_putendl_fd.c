/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:05:28 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:26:15 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs a string to the file descriptor but ends with a newline
#include "libft.h"

void	ft_putendl_fd(char *s, size_t fd)
{
	if (s)
	{
		ft_putstr_fd (s, fd);
		ft_putchar_fd ('\n', fd);
	}
}
