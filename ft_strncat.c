/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 20:20:51 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/21 09:39:31 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t max)
{
	
	size_t len;

	len = ft_strlen(dest);
	ft_memccpy(dest + len, src, '\0', max);

	return (dest);
}
