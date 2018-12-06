#include <string.h>
#include "ft.h"

char	*ft_strrchr(char *s, int c)
{
	char *s1;

	s1 = s;
	while (*s)
		s++;
	if (c == 0)
		return (s);
	while (s >= s1)
		if (*s-- == c)
			return (++s);
	return (NULL);
	
}
