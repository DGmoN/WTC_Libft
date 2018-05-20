/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 21:07:29 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 12:09:30 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *one, const void *two, int len)
{
	int				sum;
	unsigned char	a;
	unsigned char	b;

	sum = 0;
	while (len >= 0)
	{
		a = ((char *)one)[len] * len;
		b = ((char *)two)[len] * len;
		sum += a - b;
		len--;
	}
	if (sum > 0)
		return (1);
	if (sum < 0)
		return (-1);
	return (0);
}
