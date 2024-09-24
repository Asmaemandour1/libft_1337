/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:45:28 by amandour          #+#    #+#             */
/*   Updated: 2023/12/04 17:19:06 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*reversestring(char *s, size_t len)
{
	int		start;
	int		end;
	char	t;

	start = 0;
	len = ft_strlen(s);
	end = len - 1;
	while (start < end)
	{
		t = s[start];
		s[start] = s[end];
		s[end] = t;
		start++;
		end--;
	}
	return (s);
}

static size_t	lennumber(long num)
{
	size_t	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	size_t	i;
	char	*s;

	nbr = n;
	i = 0;
	s = ft_calloc(lennumber(nbr) + 1, 1);
	if (!s)
		return (NULL);
	if (nbr == 0)
		return (s[0] = '0', s[1] = '\0', s);
	if (nbr < 0)
	{
		nbr = -nbr;
		s[lennumber(nbr)] = '-';
	}
	while (nbr != 0)
	{
		s[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i++;
	}
	return (reversestring(s, i));
}
