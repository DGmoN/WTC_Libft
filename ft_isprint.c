/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 07:07:09 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/22 17:51:09 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int e)
{
    return (e >= 32 && e <= 126);
}
