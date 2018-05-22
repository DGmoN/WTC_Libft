/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:06:40 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 15:26:03 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(char const *big, char const *little, size_t max)
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
	if (ltlen == 0 || ltlen == bglen)
		return ((char *)big);
	while (big[index] != '\0' && index < max)
	{
		seeking = 0;
		while (little[seeking] != '0')
		{
//			printf("[%i, %i]\n", index, seeking);
			if (little[seeking] != big[index + seeking] && index + seeking < max)
				break ;
			seeking++;
		}
		if (little[seeking] == '\0')
			return ((char *) big + index);
		index++;
	}

	return (ret);
}
