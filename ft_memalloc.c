/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 21:00:52 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/15 21:05:55 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "lib_ft.h"

void	*ft_memalloc(size_t size)
{
	void *ret;

	ret = malloc(size);
	ft_bzero(ret, size);
	return (ret);
}
