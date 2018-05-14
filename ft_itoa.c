/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:25:37 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/12 17:47:24 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib_ft.h"

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

char	*	ft_itoa(int num, char * buffer, int base)
{
	int strLen;
	int index;
	int holder;
	int cchar;

	strLen = ft_numlen(num, base);
	if(num < 0 && base == 10) strLen += 1;
	buffer = (char *) malloc(sizeof(char *) * (strLen + 1));
	index = strLen - 1;
	holder = num;
	while (index >= 0)
	{
		if (buffer[index] == '-') break; 	
		cchar = holder % base;
		if(cchar < 0 && base == 10)
		{
			buffer[0] = '-';
			cchar *= -1;
		}
		buffer[index] = ITOA_CHARS[cchar];
		holder /= base;
		index--;
	}
	buffer[strLen] = '\0';
	return (buffer);
}
