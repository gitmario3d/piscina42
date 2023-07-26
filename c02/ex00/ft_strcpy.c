/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:46:45 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/12 08:10:59 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	array_pos;

	array_pos = 0;
	while (src[array_pos] != '\0')
	{
		dest[array_pos] = src[array_pos];
		array_pos++;
	}
	dest[array_pos] = '\0';
	return (dest);
}
/*int main(void)
{
	char src[] = "abcdef";
	char dest[] = "0123457";

	*dest = *ft_strcpy(dest, src);
	printf("%s", dest);
}*/
