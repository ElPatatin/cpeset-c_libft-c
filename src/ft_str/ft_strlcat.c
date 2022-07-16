#include "../../inc/lib_ft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int	src_s;
	unsigned int	dest_s;
	unsigned int	i;

	src_s = ft_strlen(src);
	dest_s = ft_strlen(dest);
	i = 0;
	if (dstsize == 0)
		return (src_s);
	if (dstsize <= dest_s)
		return (dstsize + src_s);
	while (dstsize && (--dstsize - dest_s) && src[i])
	{
		dest[dest_s + i] = src[i];
		i++;
	}
	dest[dest_s + i] = '\0';
	return (src_s + dest_s);
}