#include "ft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n--)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s2++;
		s1++;
	}
	if (n == -1)
		return (0);
	if (*s1)
		return (*s1);
	if (*s2)
		return (-*s2);
	return (0);
}
