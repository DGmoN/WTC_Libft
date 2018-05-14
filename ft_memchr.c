/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 20:47:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/11 21:01:58 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void * ft_memchr(const void * hay, int needle, int len)
{
	int index;
	char * in;

	in = (char *) hay;
	index = 0;
	while (index <= len)
	{
		if( *(in + index) == needle)
			return (in + index);
		index++;
	}
	return ((void *)0);
}
