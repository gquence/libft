void	*ft_memcpy(void *dest, const void *src, int n)
{
	void *d;

	d = dest;
	while (n--)
		*(char *)dest++ = *(char const*)src++;
	return (d);
}
