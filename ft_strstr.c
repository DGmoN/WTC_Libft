/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:29:07 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 11:24:51 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(char const *big, char const *little)
{
	size_t	ltlen;
	size_t	index;
	size_t	bglen;
	char	*ret;

	ltlen = ft_strlen(little);
	if (ltlen <= 0)
		return ((char *)big);
	bglen = ft_strlen(big);
	ret = (char *)NULL;
	index = 0;
	while (big[index] != '\0' && bglen - index > ltlen)
	{
		if (ft_memcmp(big + index, little, ltlen) == 0)
		{
			ret = (char *)(&big[index]);
			break ;
		}
		index++;
	}
	return (ret);
}
