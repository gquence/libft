#include "ft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *buf;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	buf = str;
	while (*s1)
		*str++ = (char)*s1++;
	while (*s2)
		*str++ = (char)*s2++;
	*str = 0;
	return (buf);
}
