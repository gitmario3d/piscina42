/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:56:03 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/17 15:57:57 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_checksize(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

int	ft_checksame(char	*str, char	*to_find, int pos)
{
	int	i;
	int	check;
	int	j;

	i = 0;
	j = pos;
	check = 1;
	while (to_find[i] != '\0')
	{
		if (to_find[i] != str[j])
		{
			check = 0;
		}
		i++;
		j++;
	}
	return (check);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	int	check;
	int	i;

	check = 0;
	if (ft_checksize(to_find) != 0)
	{
		i = 0;
		while (str[i] != '\0' && check == 0)
		{
			if (str[i] == to_find[0])
			{
				check = ft_checksame(str, to_find, i);
			}
			i++;
		}
		if (check == 1)
			return (&str[i - 1]);
		else
			return (0);
	}
	else
	{
		return (str);
	}
}
/*int main(void)
{
	char	str[] = "Vamos a probar esto";
	char	to_find[] = "probar";
	char *pointer;

	pointer = ft_strstr(str, to_find);
	printf("%s", pointer);	
}*/
