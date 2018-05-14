/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/12 17:28:02 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/12 17:31:25 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib_ft.h"

char	*	ft_strdup(const char * src)
{
	int len;
	char * buffer;

	len = ft_strlen(src) + 1;
	buffer = (char *) malloc(sizeof(char *) * (len));

	ft_memcpy(buffer, src, len);
	buffer[len] = '\0';
	return (buffer);
}
