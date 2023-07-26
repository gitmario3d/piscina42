/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:39:26 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/11 14:58:57 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	check_numeric;
	int	i;

	check_numeric = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			check_numeric = 0;
		i++;
	}
	return (check_numeric);
}
/*int main (void)
{
    char str[] = "01234aAzZ6789";
    int check_numeric = 3;

    check_numeric = ft_str_is_numeric(str);
    printf("%d", check_numeric);
}*/
