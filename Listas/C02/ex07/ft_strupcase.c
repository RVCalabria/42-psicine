/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:54:23 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/30 16:54:26 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - ('a' - 'A');
		i++;
	}
	return (str);
}
// int	main(void)
// {
// 	char	str1[] = "hello world!";
// 	char	str2[] = "42School";
// 	char	str3[] = "";
// 	char	str4[] = "already UPPERCASE";
// 	printf("%s\n", ft_strupcase(str1)); // HELLO WORLD!
// 	printf("%s\n", ft_strupcase(str2)); // 42SCHOOL
// 	printf("%s\n", ft_strupcase(str3)); // (vazio)
// 	printf("%s\n", ft_strupcase(str4)); // ALREADY UPPERC/ 
// }