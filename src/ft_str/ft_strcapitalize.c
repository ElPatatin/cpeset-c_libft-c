#include "../../inc/lib_ft.h"

char	*ft_strcapitalize(char *str)
{
	char	*start;

	start = str;
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	++str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		if (!(*(str - 1) >= '0' && *(str - 1) <= '9')
				&& !(*(str - 1) >= 'A' && *(str - 1) <= 'Z')
				&& !(*(str - 1) >= 'a' && *(str - 1) <= 'z')
				&& *str >= 'a' && *str <= 'z')
			*str -= 32;
		++str;
	}
	return (start);
}