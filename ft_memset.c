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

#include "libft.h"

void	*ft_memset(void *dest, int sub, int len)
{
	unsigned char *rp;
	int						index;

	index = 0;
	rp = (unsigned char *)dest;
	while (index < len)
	{
		*rp = sub;
		index++;
	}
	return (rp);
}
