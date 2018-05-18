/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:33:16 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/18 12:01:29 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_ft.h"

static	int	seek(const char *str, const char e, int	*start, int *end)
{
	int x;
	int seeking;

	x = *start;
	*end = x;
	seeking = 0;
	while (str[x] != '\0')
	{
		if (str[x] == e)
		{
			*end = x;
			return (1);
		}
		x++;
	}
	*end = x;
	return (*end - *start);
}

static	int	count_sectors(const char *str, char e)
{
	int		start;
	int		end;
	char	*holder;

	start = 0;
	end = 0;
	while (seek(str, e, &start, &end))
	{
		holder = ft_strnew(end - start);
		ft_strncpy(holder, str + start, end-start);
		printf("%s\n",holder);
		start = end + 1;
	}

}

char	**ft_strsplit(const char *str, char delim)
{
	count_sectors(str, delim);
}
