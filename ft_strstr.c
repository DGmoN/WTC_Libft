/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:29:07 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 14:41:46 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(char const *big, char const *little)
{
	size_t	ltlen;
	size_t	index;
	size_t	bglen;
	size_t	seeking;
	char	*ret;

	ltlen = ft_strlen(little);
	bglen = ft_strlen(big);
	index = 0;
	ret = (char *)NULL;
	if(ltlen > bglen)
		return ((char *)NULL);
	if (ltlen == 0)
		return ((char *)big);
	while (big[index] != '\0')
	{
		seeking = 0;
		while (little[seeking] != '0')
		{
			if (little[seeking] != big[index + seeking])
				break ;
			else if (little[seeking + 1] == '\0')
				return ((char *) big+index);
			seeking++;
		}
		index++;
	}

	return (ret);
}
