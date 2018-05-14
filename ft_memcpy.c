/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:35:12 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/14 16:35:43 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

void ft_memcpy(void * dest, const void * src, ft_size_t len)
{
	ft_size_t zero;

	zero = 0;
	while (zero < len)
	{
		*(char *) dest++ = *(char *) src ++;
		zero++;
	}
}
