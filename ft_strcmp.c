/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:19:38 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 11:38:24 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char const *a, char const *b)
{
	int total;

	total = 0;
	total += ft_strlen(a) - ft_strlen(b);
	total = ft_memcmp(a, b, ft_strlen(a));
	if (total < 0)
		return (-1);
	if (total > 0)
		return (1);
	return (0);
}
