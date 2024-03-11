#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* Libc functions*/
//1st column
int	ft_isalpha(char c);
int	ft_isdigit(char c);
int	ft_isalnum(char c);
int	ft_isascii(char c);
int	ft_isprint(char c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *dest, unsigned char c, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
//second column
int	ft_tolower(char c);
int	ft_toupper(char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	ft_strncmp(char *s1, char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *p1, const void *p2, size_t len);
char	*ft_strnstr(char *str, char *needle, size_t len);
int	ft_atoi(const char *str);
//bottom
void	*ft_calloc(size_t num_elements, size_t element_size);
char	*ft_strdup(char *src);



#endif