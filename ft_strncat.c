/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 20:20:51 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/19 00:20:26 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t max)
{
	size_t index;
	size_t dest_len;

	dest_len = ft_strlen(dest);
	index = 0;
	while (index < max && src[index] != '\0')
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + max] = '\0';
	return (dest);
}
