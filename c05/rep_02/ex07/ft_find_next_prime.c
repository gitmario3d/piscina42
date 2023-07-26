/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:29:11 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/21 09:17:40 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb <= 1)
		return (0);
	else if (nb == 2)
		return (1);
	else if (nb > 2 && (nb % 2 != 0))
	{
		while (i < nb / 2)
		{
			if (nb % i == 0)
			{
				return (0);
			}
			i += 2;
		}
		return (1);
	}
	return (00000);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (nb < 2147483647)
	{
		if (!(nb % 2 != 0))
		{
			nb++;
			if (ft_is_prime(nb) == 1)
				return (nb);
		}
		nb += 2;
		if (ft_is_prime(nb) == 1)
			return (nb);
	}
	return (nb);
}

/*int main (void)
{
	printf("%d", ft_find_next_prime(2147483640));
}*/
