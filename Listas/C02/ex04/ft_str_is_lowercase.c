/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:45:31 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/30 16:45:33 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
			return (0);
	i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("abc"));      // 1
// 	printf("%d\n", ft_str_is_lowercase("abcD"));     // 0
// 	printf("%d\n", ft_str_is_lowercase(""));         // 1
// 	printf("%d\n", ft_str_is_lowercase("hello"));    // 1
// 	printf("%d\n", ft_str_is_lowercase("Hello!"));   // 0
// 	return (0);
// }
