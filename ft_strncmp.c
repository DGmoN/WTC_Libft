/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:26:14 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 15:50:42 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(char const *a, char const *b, size_t lim)
{
	int total;
	size_t index;
	total = 0;
	index = 0;
	while (index < lim)
	{
		total += (t_byte)a[index] - (t_byte)b[index];
		if(a[index] == '\0' || b[index] == '\0')
			break;
		index++;
	}
	if (total < 0)
		return (-1);
	if (total > 0)
		return (1);
	return (0);
}
