#include "../../inc/lib_list.h"

t_list	*ft_lstfind(t_list *begin_list, void *data_ref, int (*cmp)())
{
	if (!begin_list || !data_ref || !cmp)
		return (NULL);
	while (begin_list)
	{
		if ((*cmp)(begin_list->data, data_ref) == 0)
			break ;
		begin_list = begin_list->next;
	}
	return (begin_list);
}