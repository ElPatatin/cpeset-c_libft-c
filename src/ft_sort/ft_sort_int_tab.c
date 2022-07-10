#include "../../inc/lib_ft.h"

void	ft_sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int		swap;

	swap = 1;
	while (swap == 1)
	{
		i = 1;
		swap = 0;
		while (i < size)
		{
		 	 if (tab[i - 1] > tab [i])
			{
				ft_swap(&tab[i - 1], &tab[i]);
				swap = 1;
			}
			 ++i;
		}
	}
}