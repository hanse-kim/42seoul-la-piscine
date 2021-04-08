/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 22:39:50 by hansekim          #+#    #+#             */
/*   Updated: 2021/03/31 23:53:15 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *dest_start;

	dest_start = dest;
	while (*dest)
	{
		dest += 1;
	}
	while (*src)
	{
		*dest = *src;
		dest += 1;
		src += 1;
	}
	*dest = '\0';
	return (dest_start);
}
