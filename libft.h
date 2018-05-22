/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 11:21:33 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 17:36:43 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define ITOA_CHARS "0123456789ABCDEFG"
# define ABS(x) ((x < 0)? x * -1: x)
# define WSPACE(x) (x == '\t' || x == '\n' || x == ' ' || x == '\r' || x == '\v' || x == '\f')
# define OPPERA(x) (x == '*' || x == '/' || x == '+' || x == '-' || x == '^' x == '%')

# include <string.h>
typedef	unsigned char	t_byte;

int     ft_atoi(char const *str);
void	ft_bzero(void *start, size_t len);
int     ft_intpow(int a, int b);
int     ft_isalpha(int e);
int	    ft_isalnum(int e);
int	    ft_isascii(int a);
int	    ft_isdigit(int e);
char	*ft_itoa(int a);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int limchar, size_t maxchar);
void	*ft_memchr(const void *hay, int needle, int len);
int	    ft_memcmp(const void *one, const void *two, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memset(void *dest, int sub, int len);
void	ft_putchar(char e);
void	ft_putchar_fd(char e, int fd);
void	ft_putendl(char *str);
void	ft_putstr(char *str);
char	*ft_strcat(char *a, const char *b);
char	*ft_strchr(char const *hay, int needle);
void	ft_strclr(char *src);
int	    ft_strcmp(char const *a, char const *b);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
void	ft_striter(char *str, void (*f)(char *));
void	ft_striteri(char *str, void (*f)(unsigned int, char *));
size_t	ft_strlcat(char *dest, char const *src, size_t max);
size_t	ft_strlen(const char *str);
char	*ft_strmap(char const *srt, char (*f)(char));
char	*ft_strmapi(char const *srt, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *src, size_t max);
int	    ft_strncmp(char const *a, char const *b, size_t lim);
char	*ft_strncpy(char *dest, const char *src, size_t max);
char	*ft_strnew(size_t len);
char	*ft_strnstr(char const *big, char const *little, size_t len);
char	*ft_strrchr(char const *hay, int needle);
char	**ft_strsplit(const char *str, char delim);
char	*ft_strstr(char const *big, char const *little);
char	*ft_strtrim(const char *e);
int     ft_tolower(int a);
int     ft_toupper(int a);
int     ft_isprint(int e);

#endif
