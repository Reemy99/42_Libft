/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:02:25 by realdahh          #+#    #+#             */
/*   Updated: 2022/10/17 16:14:28 by realdahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//join The src str and dest str into another str with (malloc)
//1) handle the error if any of the strings was empty
//2) Allocate memory using malloc
#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*new;
	size_t	i;
	size_t	x;

	if (!str1 || !str2)
		return (NULL);
	new = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	x = 0;
	while (str1[x] != '\0')
		new[i++] = str1[x++];
	x = 0;
	while (str2[x] != '\0')
		new[i++] = str2[x++];
	new[i++] = '\0';
	return (new);
}
