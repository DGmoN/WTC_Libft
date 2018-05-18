/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:08:48 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/19 00:14:17 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"
#include <string.h>

/* max is the length of the resulting string */
char	*ft_strlcat(char *dest, char const *src, size_t max)
{
	size_t	dest_len;
	size_t	index;

	dest_len = ft_strlen(dest);
	while (src[index] != '\0' && index < max - dest_len - 1)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[max] = '\0';
	return (dest);
}
