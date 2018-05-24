/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:47:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/23 07:08:51 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_atoi(char const *str)
{
	int		total;
	size_t	index;
	int		sign;
	index = 0;
	total = 0;
	sign = 1;
	while (str[index] != '\0')
	{
		if (!ft_isdigit(str[index]))
		{
			if(total != 0)
				break ;
			if(str[index] == '-' && ft_isdigit(str[index + 1]))
				sign = -1;
			else if(!WSPACE(str[index]) && !(str[index] == '+' && ft_isdigit(str[index + 1])))
				break ;
		}
		else if (ft_isdigit(str[index]))
		{
			total *= 10;
			total += str[index] - '0';
		}
		index++;
	}
	total *= sign;
	if (sign == 1 && total < 0)
		return (-1);
	if (sign == -1 && total > 0)
		return (0);
	return (total);
}
