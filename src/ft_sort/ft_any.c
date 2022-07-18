#include "../../inc/lib_ft.h"

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
	{
		if ((*f)(*tab))
			return (1);
		tab++;
	}
	return (0);
}