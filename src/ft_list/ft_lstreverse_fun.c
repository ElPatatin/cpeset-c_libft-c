#include "../../inc/lib_list.h"

void	ft_lstreverse_fun(t_list *begin_list)
{
	void	*tmp;
	t_unt		i;
	t_unt		j;

	i = 0;
	j = ft_lstsize(begin_list);
	while (j > i)
	{
		tmp = ft_lstat(begin_list, i)->data;
		ft_lstat(begin_list, i)->data = ft_lstat(begin_list, j)->data;
		ft_lstat(begin_list, j)->data = tmp;
		++i;
		--j;
	}
}