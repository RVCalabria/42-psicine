/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:06:23 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/23 17:06:28 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont ++;
	}
	return (cont);
}

// int main()
// {
// 	int nb;
// 	char fr[] = {"vou testar a contagem tem que dar 36"};
// 	nb = ft_strlen(fr);
// 	printf("%d\n", nb);
// }
