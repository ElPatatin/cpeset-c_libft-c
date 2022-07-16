#include "../../inc/lib_ft.h"

int	ft_str_wcount(char const *s, char c)
{
	size_t	i;
	int		nbr_w;

	i = 0;
	nbr_w = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] && s[i] == c)
			++i;
		while (s[i] && s[i] != c)
		{
			if (i == 0 || s[i - 1] == c)
				++nbr_w;
			++i;
		}
	}
	return (nbr_w);
}