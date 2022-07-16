#include "../../inc/lib_ft.h"

int	*ft_rrange(int start, int end)
{
	int	nbrcount;
	int	*ptr;
	int	i;
	int	flag;

	i = 0;
	nbrcount = 1 + ft_absval(end - start);
	ptr = (int *)malloc(sizeof(int) * nbrcount);
	if (start > end)
		flag = 1;
	else
		flag = -1;
	while (nbrcount > i)
	{
		ptr[i++] = end;
		end += flag;
	}
	return (ptr);
}