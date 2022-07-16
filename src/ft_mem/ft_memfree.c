#include "../../inc/lib_ft.h"

char	**ft_memfree(char **ptr, int len)
{
	int	i;

	i = 0;
	while (len > i)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
	return (NULL);
}