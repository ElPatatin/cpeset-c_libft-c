#include "../../inc/lib_list.h"

t_list	*ft_lstat(t_list *begin_list, unt nbr)
{
	while (nbr-- > 0 && begin_list)
		begin_list = begin_list->next;
	return (begin_list);
}