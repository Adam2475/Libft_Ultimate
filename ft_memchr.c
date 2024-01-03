/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:47:39 by adapassa          #+#    #+#             */
/*   Updated: 2024/01/03 20:44:14 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	DESCRIPTION
    The  memchr()  function  scans  the  initial n bytes of the memory area
    pointed to by s for the first instance of c.  Both c and the  bytes  of
    the memory area pointed to by s are interpreted as unsigned char.

	RETURN VALUE
    The  memchr()  and memrchr() functions return a pointer to the matching
    byte or NULL if the character does not occur in the given memory area.
*/

void	*ft_memchr(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (((char *)s)[i] != '\0' && (size_t)i < n)
	{
		if (((char *)s)[i] == (char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
