/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:56:52 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/30 16:58:56 by rcalabri         ###   ########.fr       */
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
		if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

// int	main(void)
//  {
//  	char	str1[] = "heLLo WorLd!";
//  	char	str2[] = "42SCHOLl";
//  	char	str3[] = "";
//  	char	str4[] = "already UPPERCASE";
//  	printf("%s\n", ft_strupcase(str1)); // HELLO WORLD!
//  	printf("%s\n", ft_strupcase(str2)); // 42SCHOOL
//  	printf("%s\n", ft_strupcase(str3)); // (vazio)
//  	printf("%s\n", ft_strupcase(str4)); // ALREADY UPPERCASE
//  	return (0);
//  }
