#include "ft.h"

void	*ft_memset(void *memptr, int val, size_t num)
{
	void *buf;

	buf = memptr;
	while (num--)
		*(char *)memptr++ = (char)val;
	return (buf);
}
