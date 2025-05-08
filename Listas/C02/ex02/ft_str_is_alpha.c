/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:41:05 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/30 16:41:13 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_uppercase;
	int	is_lowercase;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		is_uppercase = (str[i] >= 'A' && str[i] <= 'Z');
		is_lowercase = (str[i] >= 'a' && str[i] <= 'z');
		if (!(is_uppercase || is_lowercase))
			return (0);
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	printf("%d\n", ft_str_is_alpha("abcDEF"));     // 1
// 	printf("%d\n", ft_str_is_alpha("abc123"));     // 0
// 	printf("%d\n", ft_str_is_alpha(""));           // 1
// 	printf("%d\n", ft_str_is_alpha("opa opa opa")); // 1
// 	printf("%d\n", ft_str_is_alpha("Opaa!"));     // 0
// 	return 0;
// }
