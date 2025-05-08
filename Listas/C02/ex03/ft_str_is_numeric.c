/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:42:40 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/30 16:42:43 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("123456")); // 1
// 	printf("%d\n", ft_str_is_numeric("1s"));       // 1
// 	printf("%d\n", ft_str_is_numeric("12a45"));  // 0
// 	printf("%d\n", ft_str_is_numeric(" 123"));   // 0
// 	printf("%d\n", ft_str_is_numeric("00123"));  // 1
// 	return (0);
// }
