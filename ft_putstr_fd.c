/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 11:47:49 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/24 11:47:52 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int index;

	if (!str)
		return ;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar_fd(str[index++], fd);
	}
}
