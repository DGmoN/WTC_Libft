/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:35:12 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/16 14:21:43 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"
#include <string.h>

void ft_memcpy(void * dest, const void * src, size_t len)
{
	size_t zero;

	zero = 0;
	while (zero <= len)
	{
		*(unsigned char *) dest++ = *(unsigned char *) src ++;
		zero++;
	}
}
