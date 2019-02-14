#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *p;
	char *rp;

	if (!s)
		return (NULL);
	if (!(p = (char *)malloc(len + 1)))
		return (NULL);
	rp = p;
	while (len--)
		*p++ = *(s + start++);
	*p = '\0';
	return (rp);
}

static unsigned int	ft_wc(char const *s, char c)
{
	unsigned int wc;

	wc = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		wc++;
		while (*s && *s == c)
			s++;
	}
	return (wc);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**p;
	const char	*estr;
	size_t		i;

	if (!s || !(p = (char **)malloc((ft_wc(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		estr = s;
		while (*estr && *estr != c)
			estr++;
		*(p + i++) = ft_strsub(s, 0, estr - s);
		s = estr;
	}
	*(p + i) = NULL;
	return (p);
}
