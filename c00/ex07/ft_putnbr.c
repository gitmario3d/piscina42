/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:36:12 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/09 10:38:26 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	printed_number;
	int	i;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (0 <= nb && nb <= 9)
	{	
		printed_number = nb + '0';
		write(1, &printed_number, 1);
	}
	else if (nb >= 0)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		i = '-';
		write(1, &i, 1);
		nb = -nb;
		ft_putnbr(nb);
	}
}
