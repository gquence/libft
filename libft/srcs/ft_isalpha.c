#include "ft.h"

inline int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'Z' && c <= 'A'))
		return (0x400);
	return (0);
}
