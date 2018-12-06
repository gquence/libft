#include <stdio.h>
#include "ft.h"
#include <ctype.h>
#include <string.h>
#include <strings.h>

int	main()
{
	char str1[] = "It's time to do something";
	char str2[] = "We must make";
	char str3[] = "It's time to do something";
	char str4[] = "We must make";

	printf("memset check:\n");
	if (strcmp(ft_memset(str1, 112, 2),memset(str3, 112, 2)))		printf("NOT OK\n");
	else
		printf("OK\n");
	
	printf("memcpy check:\n");
	if (strcmp(ft_memcpy(str1, str2, 2),memcpy(str3, str4, 2)))		printf("NOT OK\n");
	else
		printf("OK\n");
	
	printf("memccpy check:\n");
	if (strcmp(str1,str3))
		printf("NOT OK\n");
	else
		printf("OK\n");
	
	printf("memset check:\n");
	if (strcmp(ft_memset(str1, 112, 2),memset(str3, 112, 2)))		printf("NOT OK\n");
	else
		printf("OK\n");
	
}
