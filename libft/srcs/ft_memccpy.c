#include "ft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t count)
{
	while (count--)
	{		
		if ((*(char *)dest++ = *(char const *)src++) == (char)c)
			return (dest);
	}
	return (NULL);
}
