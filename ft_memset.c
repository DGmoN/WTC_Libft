/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 19:27:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/15 07:48:21 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

void	*ft_memset(void *dest, int sub, int len)
{
	t_byte *rp;

	rp = (t_byte *)dest;
	while (len > 0)
	{
		*rp = sub;
		rp++;
		len--;
	}
	return (rp);
}
