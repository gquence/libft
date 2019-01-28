#include "ft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void *d;

	d = dest;
	while (n--)
		*(char *)dest++ = *(char const*)src++;
	if (!(*(char *)dest))
		*(char *)dest = 0;
	return (d);
}
