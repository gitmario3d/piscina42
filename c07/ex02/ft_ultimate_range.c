/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:28:21 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/25 18:02:43 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	size = max - min;
	range = (int **)malloc(size * sizeof(int *));
	if (range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		range[i] = (int *)malloc(sizeof(int) * 1);
		range[i][0] = min;
		min++;
		i++;
	}
	return (i);
}

/*int main(void)
{
	int min = -3;
	int max = 3;
	int *range[max - min];
	int	range_size;

	range_size = ft_ultimate_range(range, min, max);
	printf("%d", range_size);
}*/
