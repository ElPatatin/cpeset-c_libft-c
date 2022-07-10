#include "../../inc/lib_list.h"

void	ft_lstreverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*tmp;
	t_list	*pre;

	if (!begin_list)
		return (NULL);
	current = *begin_list;
	pre = NULL;
	while (current)
	{
		tmp = current->next;
		current->next = pre;
		pre = current;
		current = tmp;
	}
	*begin_list = pre;
}