/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 10:09:19 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/19 14:12:03 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = argc - 1;
	j = 0;
	if (argc > 1)
	{
		while (i >= 1)
		{
			while (argv[i][j] != '\0')
			{
				c = argv[i][j];
				write(1, &c, 1);
				j++;
			}
			j = 0;
			write(1, "\n", 1);
			i--;
		}
	}
}
