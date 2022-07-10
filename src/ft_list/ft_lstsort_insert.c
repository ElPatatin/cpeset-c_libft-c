#include "../../inc/lib_list.h"

void	ft_lstsort_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*current;
	t_list	*elt;

	current = *begin_list;
	elt = ft_lstnew_elt(data);
	if (!current)s
	{
		*begin_list = elem;
		return ;
	}
	if ((*cmp)(elem->data, current->data) < 0)
	{
		elem->next = current;
		*begin_list = elem;
		return ;
	}
	while (current->next && (*cmp)(elem->data, current->next->data) > 0)
		current = current->next;
	elem->next = current->next;
	current->next = elem;
}