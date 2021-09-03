#ifndef LIBFT_H
# define LIBFT_H
#include <stddef.h>

int    ft_atoi(int    c);
void    ft_bzero(void *s, size_t n);
int    ft_calloc(int    c);
int    ft_isalnum(int    c);
int    ft_isalpha(int    c);
int    ft_isascii(int    c);
int    ft_isdigit(char    c);
int    ft_isprint(int    c);
int    ft_memchr(int    c);
int    ft_memcmp(int    c);
void    *ft_memcpy(void *dest, const void *src, size_t n);
int    ft_memmove(int    c);
void    *ft_memset(void    *s, int    c, size_t    n);
int    ft_strchr(int    c);
int    ft_strdup(int    c);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlen(const char *s);
int    ft_strncmp(int    c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int    ft_strrchr(int    c);
int    ft_tolower(int    c);
int    ft_toupper(int    c);
int    ft_itoa(int    c);
int    ft_putchar_fd(int    c);
int    ft_putendl_fd(int    c);
int    ft_putnbr_fd(int    c);
int    ft_putstr_fd(int    c);
int    ft_split(int    c);
int    ft_striteri(int    c);
int    ft_strjoin(int    c);
int    ft_strmapi(int    c);
int    ft_strtrim(int    c);
int    ft_substr(int    c);

#endif