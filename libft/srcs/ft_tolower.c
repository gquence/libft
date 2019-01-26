#include "ft.h"

inline int	ft_tolower(int c)
{
	return ((c <= 'z' && c >= 'a') ? (c - 32) : (c));
}
