/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:47:48 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/18 16:52:02 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	sign_value;
	int	i;
	int	nbr;

	sign_value = 1;
	i = 0;
	nbr = 0;
	while (str[i] == 32 || str[i] == 43 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign_value *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
	}
	nbr *= sign_value;
	return (nbr);
}
/*int	main(void)
{
	char	str[] = "   -123---+----12345abc4532";
	printf("%d", ft_atoi(str));
}*/
