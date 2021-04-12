/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 21:51:29 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/12 10:21:48 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned long long	ft_strlen(char *str)
{
	unsigned long long length;

	length = 0;
	while (str[length])
		length += 1;
	return (length);
}

unsigned long long	ft_get_buffer_size(int size, char **strs, char *sep)
{
	unsigned long long	buffer_size;
	int					i;

	buffer_size = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		buffer_size += ft_strlen(strs[i]);
		i += 1;
	}
	return (buffer_size);
}

char				*ft_strcat(char *dest, char *src)
{
	char *dest_start;

	dest_start = dest;
	while (*dest)
		dest += 1;
	while (*src)
	{
		*dest = *src;
		dest += 1;
		src += 1;
	}
	*dest = '\0';
	return (dest_start);
}

char				*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned long long	buffer_size;
	char				*buffer;
	int					i;

	if (size == 0)
	{
		buffer = (char *)malloc(sizeof(char));
		buffer[0] = '\0';
	}
	else
	{
		buffer_size = ft_get_buffer_size(size, strs, sep);
		buffer = (char *)malloc(sizeof(char) * buffer_size + 1);
		if (buffer == NULL)
			return (NULL);
		buffer[0] = '\0';
		i = -1;
		while (++i < size - 1)
		{
			ft_strcat(buffer, strs[i]);
			ft_strcat(buffer, sep);
		}
		ft_strcat(buffer, strs[i]);
	}
	return (buffer);
}
