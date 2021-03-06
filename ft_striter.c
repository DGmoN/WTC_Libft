/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 08:31:13 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/23 07:28:42 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_striter(char *str, void (*f)(char *))
{
	if(str && f)
		while (*str != '\0')
		{
			f(str);
			str++;
		}
}
