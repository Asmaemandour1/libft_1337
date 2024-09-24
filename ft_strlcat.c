/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:43:18 by amandour          #+#    #+#             */
/*   Updated: 2023/12/04 17:22:02 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = -1;
	if (!dstsize)
		return (src_len);
	dst_len = ft_strlen(dst);
	while (src[++i] && i + dst_len < dstsize - 1)
		dst[dst_len + i] = src[i];
	dst[dst_len + i] = '\0';
	if (dstsize < dst_len)
		dst_len = dstsize;
	return (src_len + dst_len);
}
