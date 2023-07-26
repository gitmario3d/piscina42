/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:28:36 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/10 17:18:46 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	array_pos;
	int	copied_nbr;
	int	previous_array_pos;

	array_pos = 1;
	previous_array_pos = array_pos - 1;
	copied_nbr = tab[0];
	while (size > 0)
	{
		while (array_pos < size)
		{
			if (tab[array_pos] < tab[previous_array_pos])
			{
				copied_nbr = tab[previous_array_pos];
				tab[previous_array_pos] = tab[array_pos];
				tab[array_pos] = copied_nbr;
			}
			array_pos++;
			previous_array_pos = array_pos - 1;
		}
		array_pos = 1;
		previous_array_pos = array_pos - 1;
		size--;
	}
}
