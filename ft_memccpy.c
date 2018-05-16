/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 19:43:19 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/16 08:16:14 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h" 
#include <string.h>

void * ft_memccpy(void * dest, const void * src, int limchar, size_t maxchar)
{
	unsigned char * ed;
	size_t index;

	index = 0;
	ed = dest;
	while (index < maxchar)
	{
		*ed = ((char *) src)[index];
		if (((char *)src)[index] == limchar) break;
		ed++;
		index++;
	}
	return (ed);
	
}
