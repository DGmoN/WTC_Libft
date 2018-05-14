/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:02:50 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/14 16:07:20 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

char * ft_strcpy(char * dest, const char * src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
	}
	dest[index] = 0;
	return (dest);
}
