
#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*next_line;
	int		char_read;
	char	*buf;
	char	*result_string;
	int		i;
	int		total_len;

	total_len = 0;
	char_read = 1;

	buf = malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &next_line, 0) < 0)
		return (NULL);

	while(char_read > 0)
	{
		char_read = read(fd, buf, BUFFER_SIZE);
		buf[char_read] = '\0';
		//printf("%d\n", char_read);
		// if(!char_read)
		// {
		// 	free(buf);
		// 	return (NULL);
		// }
		//printf("total len : %d\n", total_len);
		i = 0;
		while(i < char_read)
		{
			if(buf[i] == '\n')
			{
				printf("Next char of buffer: %c\n", buf[i]);
				//result_string = strjoin(result_string, buf);
				break ;
			}
			i++;
		}
		if(buf[i] == '\n')
		{
			printf("%c", buf[i-1]);
			printf("%c", buf[i-2]);
			printf("%c", buf[i-3]);
			printf("%c", buf[i-4]);
			printf("%c", buf[i-5]);
			break;
		}
		//result_string = strjoin(result_string, buf);
	}

	//printf("result: %s", result_string);
	return result_string;
}

int main()
{
	char *path = "test.txt";

	int fd = open(path, O_RDONLY);
	get_next_line(fd);
}