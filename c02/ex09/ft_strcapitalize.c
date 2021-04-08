/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hansekim <hansekim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 19:27:28 by hansekim          #+#    #+#             */
/*   Updated: 2021/04/05 19:33:53 by hansekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int		ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

void	ft_to_uppercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	ft_to_lowercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	prev;

	i = 0;
	prev = '\0';
	while (str[i])
	{
		if (ft_char_is_alpha(str[i]))
		{
			if (ft_char_is_alpha(prev) || ft_char_is_numeric(prev))
			{
				ft_to_lowercase(str + i);
			}
			else
			{
				ft_to_uppercase(str + i);
			}
		}
		prev = str[i];
		i += 1;
	}
	return (str);
}
