#include "ft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (sizeof(dest) > n)	
		return (ft_memcpy(dest, src, n));
	return (ft_memcpy(dest, src, ft_strlen(dest)));
}
