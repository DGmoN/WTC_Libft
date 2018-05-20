/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 12:47:26 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 12:55:24 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strtrim(const char *e)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*ret;

	start = 0;
	while (WSPACE(e[start]) && e[start] != '\0')
		start++;
	end = start;
	while (!WSPACE(e[end]) && e[end] != '\0')
		end++;
	len = end - start;
	ret = ft_strnew(len);
	ret = (char *)ft_strncpy(ret, e + start, len);
	return (ret);
}
