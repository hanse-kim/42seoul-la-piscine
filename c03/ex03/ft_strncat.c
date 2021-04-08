/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 22:39:43 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/04 23:43:35 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest += 1;
	}
	while (*src && nb)
	{
		*dest = *src;
		dest += 1;
		src += 1;
		nb -= 1;
	}
	*dest = '\0';
	return (dest_start);
}
