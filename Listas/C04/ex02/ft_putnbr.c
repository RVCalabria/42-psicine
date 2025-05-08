/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 10:55:22 by rcalabri          #+#    #+#             */
/*   Updated: 2025/05/07 10:56:24 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int input_numbr)
{
	if (input_numbr < -9 || input_numbr > 9)
	{
		ft_putnbr(input_numbr / 10);
	}
	if (input_numbr < 0)
	{
		if (input_numbr >= -9 && input_numbr <= 9)
		{
			ft_putchar('-');
		}
		ft_putchar('0' - (input_numbr % 10));
	}
	else
	{
		ft_putchar('0' + (input_numbr % 10));
	}
}

// static void nl(void) { write(1, "\n", 1); }
// int main(void)
// {
//     ft_putnbr(0);    nl();
//     ft_putnbr(42);   nl();
//     ft_putnbr(-42);  nl();
//     ft_putnbr(2147483647);  nl();
//     ft_putnbr(-2147483648); nl();
//     return 0;
// }