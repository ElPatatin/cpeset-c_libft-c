#include "../../inc/lib_list.h"

t_list	*ft_lstnew(void *data)
{
	struct s_list	*lst;

	lst = (t_list *)malloc(sizeof(*lst));
	if (!lst)
		return (NULL);
	lst->data = data;
	lst->next = NULL;
	return (lst);
}