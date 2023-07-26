/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:37:03 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/11 17:10:02 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	check_uppercase;
	int	i;

	check_uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			check_uppercase = 0;
		i++;
	}
	return (check_uppercase);
}
/*int main (void)
{
    char str[] = "ABDE";
    int check_uppercase = 3;

    check_uppercase = ft_str_is_uppercase(str);
    printf("%d", check_uppercase);
}*/
