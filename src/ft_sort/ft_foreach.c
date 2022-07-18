#include "../../inc/lib_ft.h"

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	ssize_t	i;

	i = -1;
	while (++i < length)
		(*f)(tab[i]);
}