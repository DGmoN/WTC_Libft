/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:10:25 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/14 16:19:23 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

char * ft_strncpy(char * dest, const char * src, ft_size_t max)
{
	unsigned int index;

	index = 0;
	while (index < max && src[index] != 0)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
