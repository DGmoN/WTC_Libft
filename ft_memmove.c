/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 20:27:55 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/15 07:50:47 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

void	*ft_memmove(void *dest, const void *src, int num)
{
	t_byte *out;
	const t_byte * in;
	char holder;

	out = dest;
	in = (const unsigned char *) src;
	out = (unsigned char *) dest;
	while (num >= 0)
	{
		holder = in[num];
		*(out + num) = holder;
		num --;
	}
	return (dest);
}
