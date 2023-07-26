/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:33:38 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/17 18:32:30 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strsize(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i - 1);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	return_value;
	unsigned int	i;

	i = 0;
	dest_size = ft_strsize(dest);
	src_size = ft_strsize(src);
	return_value = 0;
	if (size > dest_size)
		return_value = src_size + dest_size;
	else
		return_value = src_size + size;
	while (src[i] && (dest_size + 1) < size)
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (return_value);
}
/*int main(void)
{
	char dest[] = "Hola";
	char src[] = " mundo";
	unsigned int final_size = 11;
	unsigned int	result;

	result = ft_strlcat(dest, src, final_size);
	printf("%d", result);
}*/
