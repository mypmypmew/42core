int ft_atoi(const char *str) {
	int result = 0;
	int sign = 1;
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		   str[i] == '\r' || str[i] == '\f' || str[i] == '\v') {
		i++;
	}

	// Check for sign
	if (str[i] == '-') {
		sign = -1;
		i++;
	} else if (str[i] == '+') {
		i++;
	}

	// Convert string to integer
	while (str[i] >= '0' && str[i] <= '9') {
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return sign * result;
}