#include "libft.h"

/*
    The calloc() function allocates memory for an array of  nmemb  elements
    of  size bytes each and returns a pointer to the allocated memory.  The
    memory is set to zero.  If nmemb or size is 0,  then  calloc()  returns
    either  NULL,  or a unique pointer value that can later be successfully
    passed to free().  If the multiplication of nmemb and size would result
    in  integer  overflow, then calloc() returns an error.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset ((unsigned char *)ptr, 0, nmemb * size);
	return (ptr);
}