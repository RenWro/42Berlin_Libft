/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:46:40 by rwrobles          #+#    #+#             */
/*   Updated: 2024/11/17 13:50:34 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int argument)
{
	int		length;

	length = ft_strlen(str);
	while (length >= 0)
	{
		if ((unsigned char) str[length] == (unsigned char)argument)
			return ((char *)&str[length]);
		length--;
	}
	return (NULL);
}
