#include "ft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*sbuf;

	str = (char *)malloc(sizeof(char) * (len + 1));

	sbuf = str;
	while (s[start] && len--)
	{
		*str++ = s[start];
		start++;
	}
	*str = 0;
	return (sbuf);
}
