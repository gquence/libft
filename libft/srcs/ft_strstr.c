#include "ft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char *sbuf2;

	sbuf2 = (char *)s2;
	while (*s1)
	{
		while (*(char *)s1 == *sbuf2 && *s1 && *sbuf2)
		{
			s1++;
			sbuf2++;
		}
		if (*sbuf2 != 0)
			sbuf2 = (char *)s2;
		else
			return ((char *)s1 - (sbuf2 - (char *)s2));
		s1++;
	}
	return (NULL);
}
