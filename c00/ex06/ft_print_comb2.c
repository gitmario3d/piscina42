/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:03:00 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/06 17:15:56 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(int i, int j, int k, int l)
{
	int	q;
	int	w;
	int	e;
	int	r;

	q = i + '0';
	w = j + '0';
	e = k + '0';
	r = l + '0';
	write(1, &q, 1);
	write(1, &w, 1);
	write(1, " ", 1);
	write(1, &e, 1);
	write(1, &r, 1);
	if (i != 9 || j != 8)
	{
		write(1, ", ", 2);
	}
}

void	check_n1(int a, int b, int n1)
{
	int	c;
	int	d;

	while (n1 <= 99)
	{
		c = n1 / 10;
		d = n1 % 10;
		ft_putchars(a, b, c, d);
		n1++;
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	int	a;
	int	b;

	n1 = 0;
	n2 = 0;
	while (n2 <= 99)
	{
		n1 = n2 + 1;
		a = n2 / 10;
		b = n2 % 10;
		check_n1(a, b, n1);
		n2++;
	}
}
