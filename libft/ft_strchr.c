char *ft_strchr(const char *str, int c)
{
	while(*str != '\0')
	{
		if(*str == c)
			return (char *)str;
		str++;
	}

	if(*str == '\0')
		return (char *)str;

	return (void *)0;
}