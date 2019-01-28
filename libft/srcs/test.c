#include "ft.h"
#include <ctype.h>

int main()
{
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
	}
	
	{
		char *mine_str;
		char *mine_str1;
		char *or_str;
		char *or_str1;

		mine_str = malloc(sizeof(char) * 15);
		mine_str1 = malloc(sizeof(char) * 15);

		or_str = malloc(sizeof(char) * 15);
		or_str1 = malloc(sizeof(char) * 15);

		ft_bzero((void *)mine_str, 5);
		ft_memset((void *)mine_str1, 'a', 8);
	       	ft_memset((void *)mine_str, 's', 5);
	       	ft_bzero((void *)or_str, 5);
	       	ft_memset((void *)or_str1, 'a', 8);
	       	ft_memset((void *)or_str, 's', 5);

		printf("memmove:\nmine\t\t\toriginal\n");
		printf("%s\t\t\t%s\n",\
			(char *)ft_memmove((void *)mine_str, (void *)mine_str1, 6),\
			(char *)memmove((void *)or_str, (void *)or_str1, 6));
	}

	{
	
	}
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
	return (0);
}
