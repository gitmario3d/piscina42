/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:23:54 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/20 18:16:30 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	number;

	number = nb;
	if (number <= 0)
		return (0);
	i = 1;
	while ((i * i) < number)
		i++;
	if ((i * i) == number)
		return (i);
	else
		return (0);
}
/*int main (void)
{
	printf("%d", ft_sqrt(2147483647));
}*/
