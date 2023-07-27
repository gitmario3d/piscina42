/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:57:44 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/27 13:26:43 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		arr_size;
	int		i;
	int		j;
	int		k;
	char	*arr;

	i = 0;
	j = 0;
	k = 0;
	arr_size = 1;
	while (j < size)
		arr_size += ft_strlen(strs[j++]) + ft_strlen(sep);
	arr = malloc(sizeof(char *) * arr_size);
	j = -1;
	while (++j < size)
	{
		while (strs[j][k])
			arr[i++] = strs[j][k++];
		k = 0;
		while (sep[k] && j < size - 1)
			arr[i++] = sep[k++];
		k = 0;
	}
	arr[i] = '\0';
	return (arr);
}

/*int main (void)
{
	char	**strs;

	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = "Esta";
	strs[1] = "vez";
	strs[2] = "si que si";
	printf("%s", ft_strjoin(3, strs, "..."));
}*/
