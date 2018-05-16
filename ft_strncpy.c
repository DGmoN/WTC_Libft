/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:10:25 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/16 08:05:00 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t max)
{
	ft_memccpy(dest, src, '\0', max);

	return (dest);
}
