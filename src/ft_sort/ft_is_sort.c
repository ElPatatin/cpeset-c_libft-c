#include "../../inc/lib_ft.h"

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;
	int		plus;
	int		minus;

	i = -1;
	plus = 0;
	minus = 0;
	while (++i < (lenght - 1))
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			minus++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			plus++;
	}
	return (plus == i || minus == i);
}