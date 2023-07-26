/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:49:51 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/11 13:47:34 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	array_pos;

	array_pos = 0;
	while (array_pos < n && src[array_pos] != '\0')
	{
		dest[array_pos] = src[array_pos];
		array_pos++;
	}
	while (array_pos < n)
	{
		dest[array_pos] = '\0';
		array_pos++;
	}
	return (dest);
}
/*int main(void)
{
	char	src[] = "abcde";
	char	dest[] = "1234567";
	unsigned int	length;

	length = 6;
	*dest = *ft_strncpy(dest, src, length);

	printf("%s", dest);
}*/
