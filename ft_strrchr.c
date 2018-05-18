/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 00:26:01 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/19 00:27:27 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"
#include <string.h>

char	*ft_strrchr(char const *hay, int needle)
{
	size_t	offset;
	char	*last;

	last = (char *) NULL;
	offset = 0;
	while(hay[offset - 1] != '\0')
	{
		if(hay[offset] == needle)
			last = hay + offset;
		offset++;
	}
	return (last);
}
