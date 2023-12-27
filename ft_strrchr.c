/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:28:30 by adapassa          #+#    #+#             */
/*   Updated: 2023/12/20 19:02:47 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strrchr() function returns a pointer to the last occurrence of  the
    character c in the string s.

	The strchr() and strrchr() functions return a pointer  to  the  matched
    character  or NULL if the character is not found.  The terminating null
    byte is considered part of the string, so that if  c  is  specified  as
    '\0', these functions return a pointer to the terminator.
*/

char	*ft_strrchr(char *s, int c)
{
	char *endPtr;

	endPtr = s + ft_strlen(s);
	while (endPtr >= s)
	{
		if(*endPtr == (char)c)
			return (endPtr);
		endPtr--;
	}
	if (!s)
		return (s);
	return (NULL);
}