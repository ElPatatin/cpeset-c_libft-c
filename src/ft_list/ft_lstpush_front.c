#include "../../inc/lib_list.h"

void	ft_lstpush_front(t_list **begin_list, void *data)
{
	t_list	*new_elt;

	new_elt = ft_lstnew_elt(data);
	new_elt->next = *begin_list;
	*begin_list = new_elt;
}