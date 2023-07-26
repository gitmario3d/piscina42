/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:27:46 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/13 12:58:58 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_calc_size(char	*array)
{
	unsigned int	size;

	size = 0;
	while (array[size] != '\0')
	{
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	i;

	src_size = ft_calc_size(src);
	i = 0;
	while ((src[i] != '\0') && (i + 1 < size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_size);
}

/*int main(void)
{
    char    dest[] = "1234";
    char    src[] = "Probando";
    unsigned int src_size;
	unsigned int dest_size;

	dest_size = ft_calc_size(dest);
	dest_size++;
    src_size = ft_strlcpy(dest, src, dest_size);
    printf("%u\n", src_size);
    printf("%s\n", dest);
}*/
