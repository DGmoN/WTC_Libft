/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:33:16 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/24 10:13:34 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char			**ft_strsplit(const char *str, char delim)
{
	char			**ret;
	int				end;
	int				start;
	int				put;
	int				get;

	if (!str)
		return ((char **)NULL);
	ret = (char **)ft_memalloc(sizeof(char *) * ft_count_w(str, delim));
	if (!ret)
		return ((char **)NULL);
	start = -1;
	end = -1;
	put = 0;
	get = 0;
	while (str[get])
	{

		//printf("S->%i E->%i\n", start, end);
		if(str[get] == delim && start == end)
			start = end = get;
		else if (str[get] == delim && start != end)
		{
			ret[put++] = ft_strndup(str + start + 1, end - start);
		//	printf("%s : \n",ret[put - 1]);
			start = end = get;
		}
		else
			end = get;
		get++;
	}
	if (start != end)
		ret[put++] = ft_strndup(str + start + 1, end - start); 
	ret[put] = (char *)NULL;
	return (ret);
}
