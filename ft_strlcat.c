/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:08:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 11:52:05 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, char const *src, size_t max)
{
	char		*dhld;
	size_t		available;
	size_t		dstlen;
	size_t		index;

	dhld = dest;
	available = max;
	while (available-- != 0 && *dhld != '\0')
		dhld++;
	dstlen = dhld - dest;
	available = max - dstlen;
	if (available == 0)
		return (dstlen + ft_strlen(src));
	index = 0;
	while(src[index] != '\0')
	{
		if (index < available)
			dest[dstlen + index] = src[index];
		index++;
	}
	if (dstlen + index == max)
		dest[dstlen + index - 1] = '\0';
	else
		dest[dstlen + index] = '\0';
	return (dstlen + (index));
}

