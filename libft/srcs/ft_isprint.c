#include "ft.h"

inline int	ft_isprint(int c)
{
	if (c >= 0x20 && c <= 0x7E)
		return (0x4000);
	return (0);
}
