/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:16:25 by adapassa          #+#    #+#             */
/*   Updated: 2023/12/23 17:44:35 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The  strchr() function returns a pointer to the first occurrence of the
    character c in the string s.

	The strchr() and strrchr() functions return a pointer  to  the  matched
    character  or NULL if the character is not found.  The terminating null
    byte is considered part of the string, so that if  c  is  specified  as
    '\0', these functions return a pointer to the terminator.
*/

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = -1;
	if (c == '\0')
		return (&s[ft_strlen(s)]);
	while (s[i] != c)
	{
		i++;
		if (!s[i])
			break ;
	}
	if (s[i] != c)
		return (NULL);
	return ((s + i));
}
