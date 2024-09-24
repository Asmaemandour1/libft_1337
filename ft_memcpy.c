/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:25:52 by amandour          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:18 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*d;

	str = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0 ;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		d[i] = str[i];
		i++;
		n--;
	}
	return (dest);
}
