/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 11:21:33 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/24 13:56:55 by wgourley         ###   ########.fr       */
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

typedef struct			s_list
{
	void *content;
	size_t content_size;
	struct s_list *next;
}						t_list;

t_list	*ft_lstnew(const void *cont, size_t csize);

int     ft_atoi(char const *str);
void	ft_bzero(void *start, size_t len);
int     ft_intpow(int a, int b);
int     ft_isalpha(int e);
int	    ft_isalnum(int e);
int	    ft_isascii(int a);
int	    ft_isdigit(int e);
int		ft_isspace(int e);
int		ft_ischr(int a, int b);
int		ft_strequ(const char *a, const char *b);
int		ft_strnequ(const char *a, const char *b, size_t max);
char	*ft_strsub(const char *src, unsigned int start, size_t len);
void	ft_strdel(char **av);
char	*ft_itoa(int a);
char	*ft_strtrim_de(const char *e, int (*a)(int));
char	*ft_strtrim_delim(const char *e, char a);
char    *ft_strjoin(const char *a, const char *b);
void	*ft_memalloc(size_t size);
void	*ft_memccpy(void *dest, const void *src, int limchar, size_t maxchar);
void	*ft_memchr(const void *hay, int needle, int len);
void	*ft_memchr_n(const void *hay, int needle, int len);
void	*ft_memchr_f(const void *hay, int (*f)(int), size_t len);
void	*ft_memchr_nf(const void *hay, int (*f)(int), size_t len);
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
char	*ft_strchr_n(char const *hay, int needle);
char	*ft_strchr_f(char const *hay, int (*f)(int));
char	*ft_strchr_nf(char const *hay, int (*f)(int));
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
char	*ft_strndup(const char *src, size_t max);
int		ft_maxi(int a, int b);
int		ft_mini(int a, int b);
void	ft_putnbr(int a);
int		ft_count_w(const char *w, char delim);
void	ft_putstr_fd(char *strl, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int a, int fd);
#endif
