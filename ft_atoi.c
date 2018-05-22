/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:47:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 07:52:16 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_atoi(char const *str)
{
	size_t	strlenn;
	size_t	index;
	int		sign;
	int		ret;

	strlenn = ft_strlen(str) - 1;
	index = 0;
	ret = 0;
	sign = 0;
	if (str[0] == '+')
	    sign = 1;
	else if (str[0] == '-')
	    sign = -1;
	index += ABS(sign);
	while (str[index] != '\0')
	{
	    if(!ft_isdigit(str[index]))
	        return (0);
		ret += (str[index] - '0') * ft_intpow(10, strlenn - index) * sign;
		index++;
	}
	return (ret);
}
