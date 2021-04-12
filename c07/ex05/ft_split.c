/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:47:56 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/12 11:00:41 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_delimiter(char c, char *delimiter)
{
	while (*delimiter)
	{
		if (c == *delimiter)
			return (1);
		delimiter += 1;
	}
	return (0);
}

int		ft_get_word_count(char *str, char *delimiter)
{
	int count;

	count = 0;
	while (*str)
	{
		while (ft_is_delimiter(*str, delimiter))
			str += 1;
		if (*str && !ft_is_delimiter(*str, delimiter))
			count += 1;
		while (*str && !ft_is_delimiter(*str, delimiter))
			str += 1;
	}
	return (count);
}

int		ft_get_word_len(char *str, char *delimiter)
{
	int length;

	length = 0;
	while (*str && !ft_is_delimiter(*str, delimiter))
	{
		length += 1;
		str += 1;
	}
	return (length);
}

char	*malloc_word(char *str, char *delimiter)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (ft_get_word_len(str, delimiter) + 1));
	i = 0;
	while (*str && !ft_is_delimiter(*str, delimiter))
	{
		word[i] = *str;
		i += 1;
		str += 1;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *delimiter)
{
	char	**splited;
	int		word_count;
	int		i;

	word_count = ft_get_word_count(str, delimiter);
	splited = (char **)malloc(sizeof(char *) * word_count + 1);
	i = 0;
	while (*str)
	{
		while (ft_is_delimiter(*str, delimiter))
			str += 1;
		if (*str && !ft_is_delimiter(*str, delimiter))
		{
			splited[i] = malloc_word(str, delimiter);
			str += ft_get_word_len(str, delimiter);
			i += 1;
		}
	}
	splited[i] = NULL;
	return (splited);
}
