/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:06:33 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/19 14:07:59 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char	*str1, char	*str2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while ((str1[i] != '\0') && (str1[i] == str2[i]))
		i++;
	result = str1[i] - str2[i];
	return (result);
}

char	**ft_swap(char	**argv, int i, int j)
{
	char	*aux;

	aux = argv[i];
	argv[i] = argv[j];
	argv[j] = aux;
	return (argv);
}

void	ft_print_params(char	**argv, int argc)
{
	int		i;
	int		j;
	char	c;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			c = argv[i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char	**argv)
{
	int	i;
	int	result;

	result = 0;
	if (argc > 1)
	{
		i = 1;
		while (argv[i + 1] != (void *)0 && i < argc)
		{
			result = ft_strcmp(argv[i], argv[i + 1]);
			if (result > 0)
			{
				ft_swap(argv, i, (i + 1));
				i = 1;
			}
			else
				i++;
		}
		ft_print_params(argv, argc);
	}
}
