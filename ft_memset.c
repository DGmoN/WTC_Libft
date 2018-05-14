/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 19:27:44 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/12 17:42:58 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void * ft_memset(void * dest, int sub, int len)
{
	unsigned char * rp;
	
	rp = (unsigned char *) dest;

	while (len > 0)
	{
		*rp = sub;
		rp++;
		len--;
	}
	return (rp);

}
