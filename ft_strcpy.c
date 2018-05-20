/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:02:50 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 14:19:55 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	size_t length;

	length = ft_strlen(src);
	ft_memcpy(dest, src, length + 1);
	return (dest + length);
}
