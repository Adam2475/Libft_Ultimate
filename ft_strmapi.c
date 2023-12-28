#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	if (!(s))
		return (NULL);
	i = 0;
	new = (char *)malloc(sizeof(char) * ((size_t)(ft_strlen(s) + 1)));
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}