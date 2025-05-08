/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_sqrt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:12:35 by rcalabri          #+#    #+#             */
/*   Updated: 2025/05/07 17:12:37 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//   int nb;
//   nb = 16;
//   printf("%d\n", ft_sqrt(nb));
// }
