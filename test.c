#include "libft.h"
#include <ctype.h>
#include <stdio.h>
void	ft_test_macro()
{
	printf("alnum:\n1-%d ", ft_isalnum('1'));
	printf("a-%d ", ft_isalnum('a'));
	printf("/-%d\n", ft_isalnum('/'));

	printf("alpha:\n1-%d ", ft_isalpha('1'));
	printf("/-%d ", ft_isalpha('/'));
	printf("a-%d\n", ft_isalpha('a'));
	
	printf("ascii:\na-%d ", ft_isascii('a'));
	printf("-1-%d\n", ft_isascii(-1));
	
	printf("digit:\n1-%d ", ft_isdigit('1'));
	printf("a-%d\n", ft_isdigit('a'));

	printf("print:\nc-%d ", ft_isprint('c'));
	printf("1-%d\n", ft_isprint(1));
	
	printf("tolower:\nC-%c ", ft_tolower('C'));	
	printf("d-%c ", ft_tolower('d'));
	printf("1-%c\n", ft_tolower('1'));
	
	printf("toupper:\nC-%c ", ft_toupper('C'));
	printf("d-%c ", ft_toupper('d'));
	printf("1-%c\n", ft_toupper('1'));
}

void	ft_test_mem()
{
	{
		char *mine_str;
		char *mine_str1;
		char *or_str;
		char *or_str1;

		char test_ch[3] = {'a','b','c'};
		char test_ch1[3] = {'z','y','x'};

		int test_int[3] = {7, 7, 5};
		int test_int1[3] = {7, 5, 7};

		printf("memmove:\nmine\t\t\toriginal\n");
		for (int i = 0; i < 3; i++)
		{
		mine_str = malloc(sizeof(char) * 6);
		mine_str1 = malloc(sizeof(char) * 6);
		or_str = malloc(sizeof(char) * 6);
		or_str1 = malloc(sizeof(char) * 6);

		ft_bzero((void *)mine_str, test_int[i]);
		ft_memset((void *)mine_str1, test_ch[i], test_int1[i]);
       	ft_memset((void *)mine_str, test_ch1[i], test_int[i]);
       	bzero((void *)or_str, test_int[i]);
       	memset((void *)or_str1, test_ch[i], test_int1[i]);
       	memset((void *)or_str, test_ch1[i], test_int[i]);
		
		printf("%s\t\t%s\n",\
		(char *)ft_memmove((void *)mine_str, (void *)mine_str1, 6),\
		(char *)memmove((void *)or_str, (void *)or_str1, 6));
		ft_strdel(&mine_str);
		ft_strdel(&or_str);
		ft_strdel(&mine_str1);
		ft_strdel(&or_str1);
		}
		printf("\n*********************************\n");

	}
	
	{
		char *mine_str;
		char *or_str;

		mine_str = malloc(sizeof(char) * 15);
		or_str = malloc(sizeof(char) * 15);
		printf("memset:\nmine\t\t\toriginal\n");
		printf("%s\t\t%s\n",(char *)ft_memset((void *)mine_str, 's', 10), (char *)memset((void *)or_str, 's', 10));
		ft_strdel(&mine_str);
		ft_strdel(&or_str);

		mine_str = malloc(sizeof(char) * 6);
		or_str = malloc(sizeof(char) * 6);
		ft_bzero(mine_str, 10);
		bzero(or_str, 10);
		printf("mine\t\t\toriginal\n");
		printf("%s\t\t%s\n",(char *)ft_memset((void *)mine_str, 'a', 8), (char *)memset((void *)or_str, 'a', 8));
		ft_strdel(&mine_str);
		ft_strdel(&or_str);
		printf("\n*********************************\n");

	}
	
}

int main()
{

	ft_test_mem();
	ft_test_macro();	

	return (0);
}
