#include "ft.h"

int		ft_atoi(const char *nptr)
{
	int res;

	res = 0;
	while (*nptr == ' ')
		nptr++;
	if (*nptr == '-')
	{
		res = -res;
		nptr++;
	}
	if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = (res * 10) + (*nptr - '0');
		if (res >= MAX_INT)
			return (MAX_INT);
		if (res <= MIN_INT)
			return (MIN_INT);
		nptr++;
	}
	return (res);
}
