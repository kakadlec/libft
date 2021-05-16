#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	if (n == 0)
		return (NULL);
	src = (unsigned char *)s;
	while (i < n)
	{
		src[i] = (unsigned char)c;
		i++;
	}
	return (src);
}
