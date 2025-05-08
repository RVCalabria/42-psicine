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

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	troca;

	troca = *a;
	*a = *b;
	*b = troca;
}

// int main(void)
// {
// 	int sw1;
// 	int sw2;
// 	sw1 = 53;
// 	sw2 = 55;
// 	printf("%d, %d\n", sw1, sw2);
// 	ft_swap(&sw1, &sw2);
// 	printf("%d, %d\n", sw1, sw2);
// 	return 0;
// }
