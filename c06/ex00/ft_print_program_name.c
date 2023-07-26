/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:22:07 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/19 17:10:34 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	c;
	int		i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i] != '\0')
		{
			c = argv[0][i];
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
