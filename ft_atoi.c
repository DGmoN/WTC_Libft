/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:47:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 12:05:23 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_atoi(char const *str)
{
	size_t	strlen;
	size_t	index;
	int		neg;
	int		ret;

	strlen = ft_strlen(str);
	index = 0;
	ret = 0;
	neg = str[index] == '-';
	index += neg;
	while (str[index] != '\0')
	{
		if (str[index] > '9' || str[index] < '0')
			return (0);
		ret += (str[index] - '0') * ft_intpow(10, strlen - index);
		index++;
	}
	return (ret);
}
