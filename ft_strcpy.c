/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:02:50 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/15 07:44:04 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	ft_size_t lenght;

	length = ft_strlen(src);
	ft_memcpy(dest, src, length);
	dest[length + 1] = '\0';
	return (dest);
}
