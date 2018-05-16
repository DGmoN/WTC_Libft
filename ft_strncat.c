/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 20:20:51 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/16 08:05:35 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "lib_ft.h"

char	*ft_strncat(char *dest, char *src, size_t max)
{
	char	*buffer;
	size_t	base;

	base = ft_strlen(dest);
	buffer = (char *) malloc(sizeof(char *) * (base + max + 1));
	ft_memcpy(buffer, dest, base);
	ft_memccpy(buffer + base, src, '\0', max);
	buffer[base + max + 1] = '\0';
	return (buffer);

}
