/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malena-b <mario3d93@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:26:17 by malena-b          #+#    #+#             */
/*   Updated: 2023/07/10 10:36:18 by malena-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	int	div_result;
	int	mod_result;

	div_result = a / b;
	mod_result = a % b;
	*div = div_result;
	*mod = mod_result;
}
