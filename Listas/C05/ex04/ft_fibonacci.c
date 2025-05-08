/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:12:01 by rcalabri          #+#    #+#             */
/*   Updated: 2025/05/07 17:12:03 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int main(void)
// {
//   int index;
// //Fibonacci index:
// // 0 : 0
// // 1 : 1
// // 2 : 1
// // 3 : 2
// // 4 : 3
// // 5 : 5
// // 6 : 8
// // 7 : 13
// // 8 : 21
// // 9 : 34
// // 10 : 55
// // 11 : 89
// // 12 : 144
// // 13 : 233
// // 14 : 377
// // 15 : 610
// // 16 : 987
//   index = 7;
//   printf("%d\n", ft_fibonacci(index));
// }
