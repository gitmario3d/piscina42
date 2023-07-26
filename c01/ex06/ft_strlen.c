/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:04:41 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/10 13:30:08 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	if (str[0] == '\0')
	{
		str_len = 0;
	}
	else
	{
		while (!(!*str))
		{
			str = str + 1;
			str_len++;
		}
	}
	return (str_len);
}
