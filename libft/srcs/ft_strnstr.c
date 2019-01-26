#include "ft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*c;
	size_t	s2_pos;

	if (!s1 || !s2 || !n)
		return (NULL);
	c = (char *)s2;
	while (*s1 && n)
	{
		s2_pos = 0;
		while (*s2 && *s1 == *s2)
		{
			s2_pos++;
			s1++;
			s2++;
		}
		while (s2_pos--)
			s1--;
		if (*s2 == 0)
			return ((char *)s1);
		else
			s2 = c;
		s1++;
		n--;
	}
	return (NULL);
}
