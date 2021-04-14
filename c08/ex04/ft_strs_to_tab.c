/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 15:24:53 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/14 15:25:51 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

long long			ft_strlen(char *str)
{
	long long length;

	length = 0;
	while (str && str[length])
		length += 1;
	return (length);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (dest == NULL || src == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

void				ft_str_to_stock(t_stock_str *stock, char *str)
{
	stock->size = ft_strlen(str);
	stock->str = str;
	stock->copy = ft_strdup(str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab;
	int				i;

	tab = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (!av[i])
		{
			free(tab);
			return (NULL);
		}
		ft_str_to_stock(&tab[i], av[i]);
		i++;
	}
	ft_str_to_stock(&tab[i], NULL);
	return (tab);
}
