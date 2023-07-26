/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:22:22 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/17 15:35:35 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				check_value;

	check_value = 0;
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
		i++;
	if (n != 0)
	{
		check_value = s1[i] - s2[i];
	}
	return (check_value);
}
/*int main(void)
{
    char s1[] = "abcdefg";
    char s2[] = "abndefg";
	unsigned int	n;
    int result;

	n = 3;
    result = ft_strncmp(s1, s2, n);
    printf("%d", result);
}*/
