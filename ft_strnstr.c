/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:45:44 by adapassa          #+#    #+#             */
/*   Updated: 2023/12/27 17:51:00 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The strnstr() function locates the first occurrence of the null-termi‐
     nated string little in the string big, where not more than len characters
     are searched.  Characters that appear after a ‘\0’ character are not
     searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.

	If little is an empty string, big is returned; if little occurs nowhere
     in big, NULL is returned; otherwise a pointer to the first character of
     the first occurrence of little is returned.
*/

char	*strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
}
