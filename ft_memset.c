/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 19:27:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/16 08:12:54 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

void	*ft_memset(void *dest, int sub, int len)
{
	unsigned char *rp;

	rp = (unsigned char *)dest;
	while (len > 0)
	{
		*rp = sub;
		rp++;
		len--;
	}
	return (rp);
}
