#include "ft.h"

const void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*(const char *)s++ && n--)
	{
		if (*(const char *)s == c)
			return (s);
	}
	return (NULL);
}
