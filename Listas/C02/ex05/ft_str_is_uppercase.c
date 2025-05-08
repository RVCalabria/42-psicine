/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:49:17 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/30 16:49:21 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_uppercase("abc"));      // 0
// 	printf("%d\n", ft_str_is_uppercase("abcD"));     // 0
// 	printf("%d\n", ft_str_is_uppercase(""));         // 1
// 	printf("%d\n", ft_str_is_uppercase("HELLO"));    // 1
// 	printf("%d\n", ft_str_is_uppercase("Hello!"));   // 0
// 	return (0);
// }
