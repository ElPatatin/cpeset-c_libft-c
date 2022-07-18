#include "../../inc/lib_list.h"

t_list	*ft_lstnew_elt(void *data)
{
	t_list	*new_elt;

	new_elt = (t_list *)malloc(sizeof(t_list));
	if (!new_elt)
		return (NULL);
	new_elt->data = data;
	new_elt->next = NULL;
	return (new_elt);
}