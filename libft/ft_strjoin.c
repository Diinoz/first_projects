/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:31:13 by nicordie          #+#    #+#             */
/*   Updated: 2023/05/15 14:27:03 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	string = malloc((len + 1) * sizeof (char));
	if (!string)
		return (0);
	while (*s1)
	{
		*string = *s1;
		string++;
		s1++;
	}
	while (*s2)
	{
		*string = *s2;
		string++;
		s2++;
	}
	*string = 0;
	return (string - len);
}
