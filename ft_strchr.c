/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:21:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/19 00:24:43 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"
#include <string.h>

char	*ft_strchr(char const *hay, int needle)
{
	size_t offset;

	offset = 0;
	while(hay[offset - 1] != '\0')
	{
		if(hay[offset] == needle)
			return (hay + offset);
		offset++;
	}
	return ((char *)NULL);
}
