/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 13:51:41 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/24 15:24:51 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_s)
{
	t_list *ret;
	
	ret = (t_list *)ft_memalloc(sizeof(ret));
	if (!ret)
		return ((t_list *)NULL);
	if (!content)
	{
		ret->content_size = 0;
		ret->content = NULL;
	}
	else
	{
		ret->content_size = content_s;
		ret->content = ft_memalloc(ret->content_size);
		ft_memcpy(ret->content, content, ret->content_size);
	}
	ret->next = NULL;
	return (ret);
}
