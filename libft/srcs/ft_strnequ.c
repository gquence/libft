#include <string.h>
#include "ft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{

	if (!ft_strncmp(s1, s2, n))
		return (1);
	return (0);
}
