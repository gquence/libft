#include "ft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while ((*(char *)s1 && *(char *)s2) && n)
	{
		if (*(char *)s1 != *(char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	if (*(char *)s1)
		return (*(unsigned char *)s1);
	if (*(char *)s2)
		return (-*(unsigned char *)s2);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	char str1[] = "wtf";
	char str2[] = "wtfn";
	printf("%d\n",memcmp(str1, str2, atoi(av[1])));
	printf("%d\n",ft_memcmp(str1, str2, atoi(av[1])));
}
