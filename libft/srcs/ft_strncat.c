#include "ft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*s_buf1;

	s_buf1 = s1;
	while (*s_buf1)
		s_buf1++;		
	while (*s2 && n--)
	{
		*s_buf1++ = *s2++;
	}
	*s_buf1 = 0;
	return (s1);
}
