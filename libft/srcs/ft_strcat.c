#include <string.h>
#include "ft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*s_buf1;

	s_buf1 = s1;
	while (*s_buf1)
		s_buf1++;		
	while (*s2)
	{
		*s_buf1++ = *s2++;
	}
	*s_buf1 = 0;
	return (s1);
}
