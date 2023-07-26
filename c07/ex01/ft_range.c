/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:57:19 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/26 08:07:56 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
	{
		range = 0;
		return (range);
	}
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*int main(void)
{
	int	min = -8;
	int	max = 17;
	int	*range;
	int	i;

	i = 0;
	range = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d", range[i]);
		printf("%s", "\n");
		i++;
	}
	free(range);
}*/
