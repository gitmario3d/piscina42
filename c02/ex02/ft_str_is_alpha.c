/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:59:58 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/11 17:13:52 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	check_alpha;
	int	i;

	check_alpha = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
			{
				check_alpha = 0;
			}
		}
		i++;
	}
	return (check_alpha);
}
/*int main (void)
{
	char str[] = "abcd1jdjf";
	int check_alpha = 3;

	check_alpha = ft_str_is_alpha(str);
	printf("%d", check_alpha);
}*/
