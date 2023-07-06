/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:40:29 by nicordie          #+#    #+#             */
/*   Updated: 2023/04/26 14:52:34 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	i = 0;
	while (*(s + i) != (char) c && *(s + i))
		i++;
	if (*(s + i) == (char) c)
		ptr = (char *)(s + i);
	else
		return (0);
	return (ptr);
}
