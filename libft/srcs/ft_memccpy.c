#include <string.h>
void	*ft_memccpy(void *dest, void const *src, int c, int count)
{
	while (count--)
	{		
		if ((*(char *)dest++ = *(char const *)src++) == (char)c)
			return (dest);
	}
	return (NULL);
}
