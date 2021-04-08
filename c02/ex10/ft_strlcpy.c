/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:39:24 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/05 22:29:59 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int length;

	length = 0;
	while (str[length])
	{
		length += 1;
	}
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_length;

	i = 0;
	src_length = ft_strlen(src);
	while (i + 1 < size && i < src_length)
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = '\0';
	return (src_length);
}
