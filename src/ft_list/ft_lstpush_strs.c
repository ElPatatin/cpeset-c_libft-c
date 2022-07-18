#include "../../inc/lib_list.h"

t_list	*ft_lstpush_strs(int size, char **strs)
{
	t_list	*new_strs;
	int		idx;

	new_strs = NULL;
	idx = 0;
	while (idx < size)
		ft_lstpush_front(&new_strs, strs[idx++]);
	return (new_strs);
}