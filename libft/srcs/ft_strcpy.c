char	*ft_strcpy(char *dest, const char *src)
{
	char *str;

	str = dest;
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (dest);
}
