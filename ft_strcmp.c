/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:19:38 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 15:33:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char const *a, char const *b)
{
	int total;

	const t_byte *_a = (const t_byte*)a;
	const t_byte *_b = (const t_byte*)b;
	
	total = ft_strlen(a) - ft_strlen(b);
	total += ft_memcmp(_a, _b, ft_strlen(a));
	if (total < 0)
		return (-1);
	if (total > 0)
		return (1);
	return (0);
}
