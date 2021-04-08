/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 23:53:08 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/04 23:23:16 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length += 1;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int dest_length;
	unsigned int src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	else if (dest_length >= size)
		return (size + src_length);
	i = 0;
	while (dest_length + i + 1 < size && src[i])
	{
		dest[dest_length + i] = src[i];
		i += 1;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
