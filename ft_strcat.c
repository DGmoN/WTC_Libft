/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/14 16:24:53 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/15 07:35:09 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib_ft.h"

char	*ft_strcat(char *a, const char *b)
{
	ft_size_t	size_a;
	ft_size_t	size_b;
	char		*ret;

	size_a = ft_strlen(a);
	size_b = ft_strlen(b);
	ret = malloc(sizeof(char *) * (size_a + size_b + 1));
	ft_memcpy(ret, a, size_a);
	ft_memcpy(ret + size_a, b, size_b);
	ret[size_a + size_b] = '\0';
	return (ret);
}
