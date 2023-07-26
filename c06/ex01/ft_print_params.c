/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:45:49 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/19 14:10:53 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	j = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			while (argv[i][j] != '\0')
			{
				c = argv[i][j];
				write(1, &c, 1);
				j++;
			}
			write(1, "\n", 1);
			j = 0;
			i++;
		}
	}
}
