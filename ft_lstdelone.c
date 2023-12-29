#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	(*del)(lst->content);
	free(lst);
}
// lst : is the node to clear
// del : is the address of the function used to delete the content 
