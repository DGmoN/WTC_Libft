/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 07:11:43 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/15 07:21:18 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_H
# define LIB_FT_H
# define ITOA_CHARS "0123456789ABCDEFG"

typedef unsigned char	t_byte;
typedef unsigned int	t_ft_size;

void	ft_putchar(char e);
void	ft_putstr(char *str);
void	ft_putline(char *str);
int		ft_strlen(const char *str);
char	*ft_itoa(int num, char *buffer, int base);
void	ft_bzero(void *offset, int length);
void	ft_memcpy(void *dest, const void *src, ft_size_t len);
void	*ft_memccpy(void *dest, const void *src, int lim, ft_size_t max);
void	*ft_memset(void *dest, int val, int len);
void	*ft_memmove(void *dest, const void *src, ft_size_t len);
void	*ft_memchr(const void *hay, int needle, ft_size_t len);
int		ft_memcmp(const void *one, const void *two, ft_size_t len);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strccpy(char *dest, const char *src, ft_size_t maxchar);
char	*ft_strcat(char *a, const char *b);
#endif
