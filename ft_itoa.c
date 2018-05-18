/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:25:37 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/18 14:40:40 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib_ft.h"
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
	int		strLen;
	int		index;
	int		holder;
	int		cchar;
	char	*bbuffer;

	strLen = ft_numlen(num, base);
	if(num < 0 && base == 10) strLen += 1;
	bbuffer = ft_strnew(strLen);
	index = strLen - 1;
	holder = num;
	while (index >= 0)
	{
		if (bbuffer[index] == '-') break; 	
		cchar = holder % base;
		if(cchar < 0 && base == 10)
		{
			bbuffer[0] = '-';
			cchar *= -1;
		}
		bbuffer[index] = ITOA_CHARS[cchar];
		holder /= base;
		index--;
	}
	ft_putline(bbuffer);
	bbuffer[strLen] = '\0';
	return (bbuffer);
}
