/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:40:57 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/18 14:42:18 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *srt, char (*f)(char))
{
	char	*ret;
	size_t	len;
	size_t	pos;

	pos = 0;
	len = ft_strlen(srt);
	ret = ft_strnew(len);
	
	while(srt[len] != '\0')
	{
		ret[pos] = f(srt[pos]);
		pos++;
	}
	return (ret);
}
