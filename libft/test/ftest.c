#include <strings.h>
#include <string.h>
#include <stdio.h>

void	ft_bzero(char *s, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
}

void	ft_memcpy(char *dest, const char *src, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	ft_memccpy(char *dest, const char *src, int c, size_t count)
{
	int i;

	i = 0;
	while (i < count && src[i - 1] != c)
	{
		dest[i] = src[i];
		i++;
	}
}

int	main()
{
	char *str1 = "whilei";
	char str[] = "whenasd";
//	ft_memccpy(str, str1, 'h', 5);
//	printf("%s", str);
	memmove(str, str1, 6);
	printf("%s\n", str);
}
