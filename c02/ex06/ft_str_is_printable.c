/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:48:12 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/13 08:09:54 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	check_printable;
	int	i;

	check_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] < 127))
		{
			check_printable = 0;
		}
		i++;
	}
	return (check_printable);
}
/*int main (void)
{
	int i0 = 50;
	int i1 = 60;
	int i2 = 81;
	int i3 = 20;
    char str[] = {i0, i1, i2, i3};
    int check_printable = 3;

    check_printable = ft_str_is_printable(str);
    printf("%d", check_printable);
}*/
