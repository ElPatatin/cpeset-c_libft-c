#include "../../inc/lib_ft.h"

int	ft_count_if(char **tab, int lenght, int (*f)(char *))
{
	unsigned int	cnt;
	ssize_t			i;

	cnt = 0;
	i = -1;
	while (++i < lenght)
	{
		if ((*f)(tab[i]))
			++cnt;
	}
	return (cnt);
}