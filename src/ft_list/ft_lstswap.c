#include "../../inc/lib_list.h"

void	ft_lstswap(t_list *a,t_list *b)
{
	int	tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}