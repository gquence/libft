#include <string.h>
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
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char *av)
{
	char str1[] = "hello";
	char *str2 = " me girlfriend";

	printf("%s", strncat(str1,str2,20));
}
