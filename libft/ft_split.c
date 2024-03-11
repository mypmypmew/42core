/*#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int splits(char const *str, char c)
{
	int counter = 0;
	while(*str)
	{
		if(*str == c)
			counter++;
		str++;
	}
	return counter + 1;
}

char **ft_split(char const *s, char c)
{

	char **result_arr;

	printf("There are %d splits\n", splits(s, c));
	int words = splits(s, c);
	result_arr = (char **)malloc(sizeof(char *) * (words + 1));
	char const *begin = s;
	int i = 0;
	int j = 0;
	while(i < words)
	{
		if(*s == c)
		{
			result_arr[i] = (char *)malloc(sizeof(char) * (s - begin));
			while(begin < s)
			{
				result_arr[i][j] = *begin;
				begin++;
				j++;
			}
			result_arr[i][j] = '\0';
			begin = s + 1;
			j = 0;
			printf("Next string: %s\n", result_arr[i]);
			i++;
		}
		s++;
	}
	result_arr[words] = 0;

	return result_arr;
}


int main()
{
	char *str = "This,is,m,y,string";
	char c = ',';


	char **result_array = ft_split(str, c);

}

*/
#include <stdlib.h>
#include <stdio.h> // for printf

int splits(char const *str, char c) {
    int counter = 0;
    while (*str) {
        if (*str == c)
            counter++;
        str++;
    }
    return counter + 1;
}

char **ft_split(char const *s, char c) {
    int words = splits(s, c);
    char **result_arr = (char **)malloc(sizeof(char *) * (words + 1));
    if (result_arr == NULL)
        return NULL;

    int i = 0;
    while (*s) {
        const char *begin = s;
        // Find the beginning of the next word
        while (*s && *s == c)
            s++;
        if (*s == '\0')
            break; // Exit if the end of the string is reached
        begin = s; // Update the beginning of the word
        // Find the end of the current word
        while (*s && *s != c)
            s++;
        int word_length = s - begin;
        result_arr[i] = (char *)malloc(sizeof(char) * (word_length + 1));
        if (result_arr[i] == NULL) {
            // Free memory and return NULL if allocation fails
            for (int j = 0; j < i; j++) {
                free(result_arr[j]);
            }
            free(result_arr);
            return NULL;
        }
        // Copy the word to the result array
        int j = 0;
        while (begin < s) {
            result_arr[i][j++] = *begin++;
        }
        result_arr[i][j] = '\0'; // Null-terminate the string
        i++;
    }
    result_arr[i] = NULL; // Null-terminate the result array
    return result_arr;
}

int main() {
    const char *s = "Hello World! This is a test";
    char **result = ft_split(s, ' ');
    if (result != NULL) {
        int i = 0;
        while (result[i] != NULL) {
            printf("Word %d: %s\n", i, result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}