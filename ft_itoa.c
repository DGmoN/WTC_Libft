/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:25:37 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 12:04:22 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <string.h>

static	int	ft_numlen(int num, int base)
{
	int remainder;
	int index;

	if (num == 0)
		return (1);
	remainder = num;
	index = 0;
	while (remainder != 0)
	{
		remainder = remainder / base;
		index++;
	}
	return (index);
}

char	*ft_itoa(int num)
{
	return (ft_itoa_b(num, 10));
}

char	*ft_itoa_b(int num, int base)
{
	int		str_len;
	int		index;
	int		holder;
	int		cchar;
	char	*bbuffer;

	str_len = ft_numlen(num, base);
	if (num < 0 && base == 10)
		str_len += 1;
	bbuffer = ft_strnew(str_len);
	index = str_len - 1;
	holder = num;
	while (index >= 0)
	{
		if (bbuffer[index] == '-')
			break ;
		cchar = holder % base;
		if (cchar < 0 && base == 10)
		{
			bbuffer[0] = '-';
			cchar *= -1;
		}
		bbuffer[index] = ITOA_CHARS[cchar];
		holder /= base;
		index--;
	}
	ft_putendl(bbuffer);
	bbuffer[str_len] = '\0';
	return (bbuffer);
}
