#include "ft.h"
#include <ctype.h>

int main()
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
	return (0);
}
