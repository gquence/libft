#include "ft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*buf;

	if (*s == '\n' || *s == '\t' || *s == ' ')
		s++;
	if (s[ft_strlen(s)] == '\t' || s[ft_strlen(s)] == '\n'\
	|| s[ft_strlen(s)] == ' ')
		str = (char *)malloc(sizeof(*str) * ft_strlen(s));
	else
		str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	buf = str;
	while (*s)
	{
		if ((*s == '\n' || *s == '\t' || *s == ' ')\
		&& !(*(s + 1)))
			break;
		*str++ = (char)*s++;
	}
	*str = 0;
	return (buf);
}
