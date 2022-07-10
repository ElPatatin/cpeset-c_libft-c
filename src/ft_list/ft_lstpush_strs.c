#include "../../inc/lib_list.h"

t_list	*ft_lstpush_strs(int size, char **strs)
{
	t_list	*new_strs;
	unt		idx;

	new_strs = NULL
	idx = 0;
	while (i < size)
		ft_lstpush_front(&new_strs, strs[i++]);
	return (new_strs);
}