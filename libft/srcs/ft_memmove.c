#include "ft.h"

void	*ft_memmove(void *dest, const void *src, int n)
{
	if (dest > src)
		return (ft_memcpy(dest, src, n));
	return (ft_memcpy(dest, src, ft_strlen(dest)));
}
