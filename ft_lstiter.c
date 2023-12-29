#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*p;

	if (lst != 0)
	{
		p = lst;
		while (p)
		{
			(*f)(p->content);
			p = p->next;
			if (p == 0)
				return ;
		}
	}
}
