#include "ft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while ((*(char *)s1 && *(char *)s2) && n)
	{
		if (*(char *)s1 != *(char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	if (*(char *)s1)
		return (*(unsigned char *)s1);
	if (*(char *)s2)
		return (-*(unsigned char *)s2);
}
