/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:31:52 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/26 08:18:22 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_puts_in_arr(char *arr, int k, char *sep, char **strs)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			arr[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] != '\0' && strs[i + 1])
		{
			arr[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	return (arr);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_calc_size(int size, char *sep, char **strs)
{
	int	size_sep;
	int	i;
	int	size_strs;

	i = 0;
	size_strs = 0;
	while (i < size)
	{
		size_strs += ft_strlen(strs[i]);
		i++;
	}
	size_sep = ft_strlen(sep);
	size = size - 1;
	return (((size * size_sep) + size_strs));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		j;
	int		k;
	int		size_total;

	j = 0;
	k = 0;
	size_total = ft_calc_size(size, sep, strs);
	arr = (char *)malloc(sizeof(char) * size_total);
	if (size == 0)
		return (arr);
	arr = ft_puts_in_arr(arr, k, sep, strs);
	return (arr);
}
/*int main(void)
{
	char    **strs;
	char    *separator;
	char    *result;
	int     size;
	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 4 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 8 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[0] = "Esto";
	strs[1] = "funciona";
	strs[2] = "de lujo";
	separator = "...";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
}*/
