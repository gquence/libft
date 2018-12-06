#include <stdio.h>
#include "ft.h"
#include <string.h>
#include <bsd/string.h>

int	main()
{
	char str1[] = "hello";
	char str2[] = " suka";
	strlcat(str1, str2, 5);
	printf("%s",str1);
	return (0);
}
