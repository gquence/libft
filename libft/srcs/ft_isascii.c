#include "ft.h"

inline int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0x7F)
		return (1);
	return (0);
}
