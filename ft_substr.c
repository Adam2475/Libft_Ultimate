/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:47:11 by adapassa          #+#    #+#             */
/*   Updated: 2024/01/04 23:00:15 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	Allocates (with malloc(3)) and returns a substring
	from the string ’s’.
	The substring begins at index ’start’ and is of
	maximum size ’len’
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
	{
		sub_str = malloc(sizeof(char) * 1);
		if (sub_str == NULL)
			return (NULL);
		sub_str[0] = 0;
		return (sub_str);
	}
	if (ft_strlen(s) - start > len)
		sub_str = malloc(sizeof(char) * ((len + 1)));
	else
		sub_str = malloc(sizeof(char) * ((ft_strlen(s) - start) + 1));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while ((char)s[start] && (size_t)i < len)
	{
		sub_str[i] = (char)s[start];
		i++;
		start++;
	}
	sub_str[i] = 0;
	return (sub_str);
}
