#include "ft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	int	i;

	i = 0;
	dup = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
