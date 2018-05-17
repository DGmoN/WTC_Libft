/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnxt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:31:10 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/17 17:53:03 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"
#include <string.h>

t_spoint	ft_strnxt(char const *hay, char const *needle, s_spoint points)
{
	size_t	index;
	size_t	npos;
	int	seeking;
	size_t	start;

	npos = 0;
	start = 0;
	seeking = 1;
	index = points.start;
	nlength = ft_strlen(needle);
	while (hay[index] != '\0' && index < points.end)
	{
		if (needle[npos] == '\0')
			return ((s_strpoint) {start, index});

		if (needle[npos] == hay[index])
		{
			if (seeking)
			{
				seeking = 0;
				start = index;
			}
			npos++;
		}
		else
		{
			npos = 0;
			seeking = 1;
		}
		index++;
	}
	return ((s_strpoint)NULL);
}

