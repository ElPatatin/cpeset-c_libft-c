#include "../../inc/lib_ft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (*(s + len) != (char) c)
	{
		--len;
		if (len == -1)
			return (0);
	}
	return ((char *)(s + len));
}