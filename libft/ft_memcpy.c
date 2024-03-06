void *ft_memcpy(void *dest, void *src, int n)
{
	if(dest == (void *)0)
		return ((void *)0);

	int	i;
	char *char_dest = (char *) dest;
	char *char_src = (char *) src;

	i = 0;
	while(i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}

	return dest;
}
