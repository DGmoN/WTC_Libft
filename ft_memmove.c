/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 20:27:55 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/12 17:50:41 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void * ft_memmove(void * dest, const void * src, int num)
{
	unsigned char * out;
	const unsigned char * in;
	char holder;

	out = dest;
	in = (const unsigned char *) src;
	out = (unsigned char *) dest;
	while (num >= 0)
	{
		holder = in[num];
		*(out + num) = holder;
		num --;
	}
	return (dest);
}
