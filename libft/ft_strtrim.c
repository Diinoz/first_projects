/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:49:33 by nicordie          #+#    #+#             */
/*   Updated: 2023/05/26 14:43:56 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (*set)
	{
		if (c == *set)
			i = 1;
		set++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_string;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && check_set(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1);
	while (end > start && check_set(s1[end - 1], set) == 1)
		end--;
	trimmed_string = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!trimmed_string)
		return (0);
	i = 0;
	while (start + i < end)
	{
		trimmed_string[i] = s1[start + i];
		i++;
	}
	trimmed_string[i] = 0;
	return (trimmed_string);
}
