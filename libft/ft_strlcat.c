/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:21:38 by nicordie          #+#    #+#             */
/*   Updated: 2023/05/25 16:08:48 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	total_len;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	total_len = len_src + len_dst;
	if (dstsize <= len_dst)
		return (len_src + dstsize);
	while (*dst)
		dst++;
	while (dstsize - len_dst - 1 > 0 && *src)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	if (dstsize != 0)
		*dst = 0;
	return (total_len);
}
