/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <malena-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:02:05 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/17 15:33:24 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;
	int	check_value;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	check_value = s1[i] - s2[i];
	return (check_value);
}
/*int main(void)
{
	char s1[] = "abcdefg";
	char s2[] = "abmdefg";
	int result;

	result = ft_strcmp(s1, s2);
	printf("%d", result);
}*/
