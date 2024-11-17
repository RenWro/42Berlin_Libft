/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:46:55 by rwrobles          #+#    #+#             */
/*   Updated: 2024/11/17 14:52:04 by rwrobles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isunwanted(char c, char const *unwanted);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	final;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	final = ft_strlen(s1) - 1;
	while (ft_isunwanted(s1[start], set) && s1[start])
		start++;
	while (ft_isunwanted(s1[final], set) && final > 0)
		final--;
	if (final < start)
	{
		str = ft_calloc(1, 1);
		return (str);
	}
	str = ft_substr(s1, start, final - start + 1);
	if (!str)
		return (NULL);
	return (str);
}

static int	ft_isunwanted(char c, char const *unwanted)
{
	int	i;

	i = 0;
	while (unwanted[i])
	{
		if (unwanted[i] == c)
			return (1);
		i++;
	}
	return (0);
}
