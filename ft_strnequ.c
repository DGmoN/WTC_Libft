/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 08:08:47 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/23 10:39:44 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strnequ(const char *a, const char *b, size_t max)
{
	if (!a || !b)
		return ((int) NULL);
	return (ft_strncmp(a, b, max) == 0);
}
