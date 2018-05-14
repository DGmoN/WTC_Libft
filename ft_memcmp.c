/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 21:07:29 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/12 11:56:12 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void * one, const void * two, int len)
{
	int sum;
	unsigned char A;
	unsigned char B;

	sum = 0;
	while (len >= 0)
	{
		A = ((char *) one)[len] * len;
		B = ((char *) two)[len] * len;
		sum += A - B;
		len--;
	}
	if (sum > 0) return (1);
	if (sum < 0) return (-1);
	return (0);
}
