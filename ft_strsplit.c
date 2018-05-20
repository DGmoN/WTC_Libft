/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgourley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 16:33:16 by wgourley          #+#    #+#             */
/*   Updated: 2018/05/20 11:27:38 by wgourley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		seek(const char *str, const char e, int *start, int *end)
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
			if (!seeking)
				*start = x + 1;
			else
			{
				*end = x;
				return (1);
			}
		}
		else if (!seeking)
			seeking = 1;
		x++;
	}
	*end = x;
	return (x);
}

static	char	*next_str(const char *str, char e, int *start, int *end)
{
	char	*holder;

	if (!seek(str, e, start, end))
		return ((char *)0);
	holder = ft_strnew(*end - *start);
	ft_strncpy(holder, str + *start, *end - *start);
	*start = *end + 1;
	holder = ft_strtrim(holder);
	return (holder);
}

static	int		count_sectors(const char *str, char e)
{
	int		start;
	int		end;
	char	*holder;
	int		len;
	int		count;

	start = 0;
	end = 0;
	count = 0;
	len = ft_strlen(str);
	while (seek(str, e, &start, &end) <= len)
	{
		holder = ft_strnew(end - start);
		ft_strncpy(holder, str + start, end - start);
		start = end + 1;
		count++;
	}
	return (count);
}

char			**ft_strsplit(const char *str, char delim)
{
	int		strcount;
	char	**ret;
	int		index;
	int		start;
	int		end;

	strcount = count_sectors(str, delim);
	ret = ft_memalloc(sizeof(char **) * strcount);
	index = 0;
	start = 0;
	end = 0;
	while (index < strcount)
	{
		ret[index] = next_str(str, delim, &start, &end);
		index++;
	}
	return (ret);
}
