#include "../../inc/lib_ft.h"

t_unt	ft_lcm(t_unt a, t_unt b)
{
	t_unt	tmp;

	if (!a || !b)
		return (0);
	if (a > b)
		tmp = a;
	else
		tmp = b;
	while (1)
	{
		if ((tmp % a) == 0 && (tmp % b) == 0)
			return (tmp);
		++tmp;
	}
}