/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:26:14 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 11:31:50 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(char const *a, char const *b, size_t lim)
{
	int total;

	total = 0;
	total = ft_memcmp(a, b, lim);
	if (total < 0)
		return (-1);
	if (total > 0)
		return (1);
	return (0);
}
