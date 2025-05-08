/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:04:51 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/15 18:05:00 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)

{
	int	numero;

	numero = '0';
	while (numero <= '9')
	{
		write(1, &numero, 1);
		numero++;
	}
}
