/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:40:43 by amandour          #+#    #+#             */
/*   Updated: 2023/12/04 13:28:36 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		c;
	size_t	result;

	c = 1;
	result = 0;
	while (*str == 32 || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			c = -c;
		str++;
	}
	while (*str <= '9' && *str >= '0')
	{
		result = result * 10 + (*str) - 48;
		if ((result >= LONG_MAX) && c == 1)
			return (-1);
		else if ((result > LONG_MAX) && c == -1)
			return (0);
		str++;
	}
	return (result * c);
}
