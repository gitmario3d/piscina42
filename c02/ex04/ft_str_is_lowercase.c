/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:00:13 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/11 15:31:02 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	check_lowercase;
	int	i;

	check_lowercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			check_lowercase = 0;
		i++;
	}
	return (check_lowercase);
}
/*int main (void)
{
    char str[] = "abcdefg";
    int check_lowercase = 3;

    check_lowercase = ft_str_is_lowercase(str);
    printf("%d", check_lowercase);
}*/
