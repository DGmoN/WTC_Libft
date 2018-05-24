/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:29:07 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/24 17:26:05 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(char const *big, char const *little, size_t max)
{
	size_t	internal;
	size_t	index;

	if (!ft_strlen(big))
		return ((char *)NULL);
	if (!strlen(little))
		return ((char *)(big));
	index = 0;
	internal = 0;
	while (index < max && big[index])
	{
//		printf("[%i : %i] >> %c\n", index, internal, big[index]);
		if (little[internal] != big[index])
		{
			index = index - internal;
			internal = 0;
		}
		else if (little[internal + 1] == '\0')
			return ((char *)big + index - internal);
		else
			internal++;
		index++;
	}
	return ((char *)NULL);
}
