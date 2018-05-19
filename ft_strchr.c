/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:21:15 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/19 13:50:55 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(char const *hay, int needle)
{
	size_t offset;

	offset = 0;
	while(hay[offset - 1] != '\0')
	{
		if(hay[offset] == needle)
			return ((char *)hay + offset);
		offset++;
	}
	return ((char *)NULL);
}
