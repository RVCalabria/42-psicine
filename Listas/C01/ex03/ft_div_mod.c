/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:50:00 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/22 12:50:04 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
// 	int x;
// 	int y;
// 	x = 57;
// 	y = 5;
// 	printf("os valores sao %d e %d.\n", x, y);
// 	ft_div_mod(x, y, &x, &y);
// 	printf("a divisao %d a sobra %d.\n", x, y);
// 	return 0;
// }
