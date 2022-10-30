/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:34:10 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/30 13:26:04 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the string to the given file descriptor
#include "libft.h"

void	ft_putstr_fd(char *s, size_t fd)
{
	size_t	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
