/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:09:12 by rcalabri          #+#    #+#             */
/*   Updated: 2025/05/07 17:09:14 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb < 0)
		return (0);
	res = 1;
	i = 0;
	while (i < nb)
	{
		res *= i + 1;
		i++;
	}
	return (res);
}

int main(void)
{
  int nb;
  nb = 5;
  printf("%d\n", ft_iterative_factorial(nb));
}
