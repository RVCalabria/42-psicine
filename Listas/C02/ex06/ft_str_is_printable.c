/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:50:56 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/30 16:50:58 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("Hello!"));   // 1
// 	printf("%d\n", ft_str_is_printable("123ABC"));   // 1
// 	printf("%d\n", ft_str_is_printable(""));         // 1
// 	printf("%d\n", ft_str_is_printable("Test\tText"));// 0 
// 	printf("%d\n", ft_str_is_printable("Hi\nThere"));// 0
// }
