/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:51:59 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/21 11:27:51 by malena-b         ###   ########.fr       */
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
	return (0);
}

/*int main (void)
{
	printf("%d", ft_is_prime(2147483647));
}*/
