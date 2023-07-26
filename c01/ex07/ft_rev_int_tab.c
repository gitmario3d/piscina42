/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:34:50 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/10 14:20:59 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	mid_size;
	int	i;
	int	array_pos;
	int	array_valor;

	mid_size = size / 2;
	i = 1;
	array_pos = 0;
	while (array_pos < mid_size)
	{
		array_valor = tab[array_pos];
		tab[array_pos] = tab[size - i];
		tab[size - i] = array_valor;
		i++;
		array_pos++;
	}
}
