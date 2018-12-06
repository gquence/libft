void	*ft_memset(void *memptr, int val, int num)
{
	void *buf;

	buf = memptr;
	while (num--)
		*(char *)memptr++ = (char)val;
	return (buf);
}
