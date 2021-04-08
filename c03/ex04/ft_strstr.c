/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 22:47:24 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/06 15:59:18 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && *s2 && n)
	{
		if (*s1 != *s2)
			break ;
		s1 += 1;
		s2 += 1;
		n -= 1;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int length;

	length = 0;
	while (str[length])
		length += 1;
	return (length);
}

char			*ft_strstr(char *str, char *to_find)
{
	unsigned int to_find_length;

	to_find_length = ft_strlen(to_find);
	while (*str)
	{
		if (ft_strncmp(str, to_find, to_find_length) == 0)
			return (str);
		str += 1;
	}
	return (0);
}
