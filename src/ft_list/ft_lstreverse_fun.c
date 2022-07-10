#include "../../inc/lib_list.h"

void	ft_lstreverse_fun(t_list *beging_list)
{
	void	*tmp;
	unt		i;
	unt		j;

	i = 0;
	j = ft_lstsize(beging_list);
	while (j > i)
	{
		tmp = ft_lstat(begin_list, i)->data;
		ft_lstat(begin_list, i)->data = ft_lstat(begin_list, j)->data;
		ft_lstat(begin_list, j)->data = tmp;
		++i;
		--j;
	}
}