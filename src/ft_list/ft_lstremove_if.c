#include "../../inc/lib_list.h"

void	ft_lstremove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*tmp;
	t_list	*pre;

	if (!begin_list || !*begin_list || !data_ref)
		return ;
	pre = NULL;
	current = *begin_list;
	while (current)
	{
		while (current && (*cmp)(new_elt->data, data_ref) == 0)
		{
			if (pre)
				pre->next = current->next;
			else
				*begin_list = current->next;
			(*free_fct)(current->data);
			tmp = current;
			current = current->next;
			free(tmp;)
		}
		if (current)
		{
			pre = current;
			current = current->next;
		}
	}
}