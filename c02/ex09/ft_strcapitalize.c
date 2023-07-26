/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:37:42 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/13 08:54:15 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_all_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_check_word_end(char *str, int i)
{
	int	end;

	end = 3;
	if (!(str[i] >= 97 && str[i] <= 122))
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 48 && str[i] <= 57))
				end = 1;
		}
	}
	else
	{
		end = 0;
	}
	return (end);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	end;

	ft_all_lowercase(str);
	end = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		else if (str[i] >= 97 && str[i] <= 122 && end == 1)
		{
			if (!(str[i -1] >= 65 && str[i -1] <= 90))
			{
				if (!(str[i -1] >= 48 && str[i -1] <= 57))
					str[i] -= 32;
			}
		}
		else if (end == 0 && str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		end = ft_check_word_end(str, i);
		i++;
	}
	return (str);
}
