#include "../../inc/lib_list.h"

void	ft_lstforeach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	if (!begin_list || !data_ref)
		return ;
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}