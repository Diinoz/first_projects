/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:05:57 by nicordie          #+#    #+#             */
/*   Updated: 2023/05/25 11:57:06 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*newstr(char const *s, char *str, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			real_len;
	size_t			temp_len;

	if (!s)
		return (0);
	temp_len = ft_strlen(s);
	real_len = 0;
	if (temp_len > start)
		real_len = temp_len - start;
	if (real_len > len)
		real_len = len;
	str = malloc((real_len + 1) * sizeof(char));
	if (!str)
		return (0);
	str = newstr(s, str, start, len);
	return (str);
}
