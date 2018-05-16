/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_ft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 07:11:43 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/16 18:06:25 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_FT_H
# define LIB_FT_H
# define ITOA_CHARS "0123456789ABCDEFG"

#include <string.h>

void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t len);
void	ft_memdel(void **ap);
void	ft_strclr(char *src);
void	ft_putchar(char e);
void	ft_putstr(char *str);
void	ft_putline(char *str);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int num, char *buffer, int base);
void	ft_bzero(void *offset, size_t length);
void	ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memccpy(void *dest, const void *src, int lim, size_t max);
void	*ft_memset(void *dest, int val, int len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *hay, int needle, size_t len);
int		ft_memcmp(const void *one, const void *two, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strccpy(char *dest, const char *src, size_t maxchar);
char	*ft_strcat(char *a, const char *b);
void	ft_striter(char *str, void (*f)(char *));
void	ft_striteri(char *str, void (*f)(unsigned int, char *));
#endif