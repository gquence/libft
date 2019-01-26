#include "ft.h"

int	ft_intlen(int i)
{
	int n;

	n = 0;
	while (i)
	{
		i = i / 10;
		n++;
	}
	return (n);
}

char	*ft_char_min_int()
{
	char *str;

	str = malloc(sizeof(char) * 12);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = 0;
	return (str);
}

char	*ft_char_zero()
{
	char *str;

	str = malloc(sizeof(char) * 2);
	str[0] = '0';
	str[1] = 0;
	return (str);
}

char	*ft_itoa(int n)
{
	char *numb;
	char *buf;

	if (!n)
		return (ft_char_zero());
	if (n == -2147483648)
		return (ft_char_min_int());
	if (n < 0)
		numb = (char*)malloc(sizeof(char) * ft_intlen(n) + 2);
	else
		numb = (char*)malloc(sizeof(char) * ft_intlen(n) + 1);
	buf = numb;
	if (n < 0)
	{
		n = -n;
		*numb++ = '-';
	}
	if (n)
		while (n)
		{
			numb[ft_intlen(n) - 1] = (n % 10) + '0';
			n /= 10;
		}
	return (buf);
}
