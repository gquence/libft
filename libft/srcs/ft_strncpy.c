#include "ft.h"
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char *d;

	d = dest;
	while (n-- && *src)
		*d++ = *src++;
	*d = '\0';
	return (dest);
}
