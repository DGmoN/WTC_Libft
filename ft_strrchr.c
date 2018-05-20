/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:26:01 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 11:29:02 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(char const *hay, int needle)
{
	size_t	offset;
	char	*last;

	last = (char *)NULL;
	offset = 0;
	while (hay[offset - 1] != '\0')
	{
		if (hay[offset] == needle)
			last = (char *)hay + offset;
		offset++;
	}
	return (last);
}
