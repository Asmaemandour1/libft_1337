/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amandour <amandour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:01:26 by amandour          #+#    #+#             */
/*   Updated: 2023/12/04 17:22:22 by amandour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*result;
	char		*s;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (!(*s1))
	{
		s = malloc(sizeof(char));
		if (!s)
			return (0);
		*s = '\0';
		return (s);
	}
	while (s1[i] && inset((char *)set, s1[i]) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (j > 0 && inset((char *)set, s1[j]) == 1)
		j--;
	result = ft_substr(s1, i, j - i + 1);
	if (!result)
		return (NULL);
	return (result[j - i + 1] = '\0', result);
}
