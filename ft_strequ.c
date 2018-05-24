/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 07:54:23 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/23 10:38:27 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

int	ft_strequ(const char *a, const char *b)
{
	if (!a || !b)
		return ((int) NULL);
	return (ft_strcmp(a, b) == 0);
}
