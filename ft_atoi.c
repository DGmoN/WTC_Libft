/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:47:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 17:34:02 by wgourley         ###   ########.fr       */
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

	sign = 1;
	total = 0;
	index = 0;
	while (str[index] != '\0')
	{
	//	printf("[%i]\n", total);	
		if (!WSPACE(str[index]) )
		{
			if(total == 0 && str[index] == '-' && ft_isdigit(str[index + 1]))
				sign = -1;
			else if (ft_isdigit(str[index]))
			{
				total *= 10;
				total += str[index] - '0';
			}
			else
				break;
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
