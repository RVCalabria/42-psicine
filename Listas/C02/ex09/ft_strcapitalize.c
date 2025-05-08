/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:00:06 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/30 17:00:09 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	start = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (start)
				str[i] = str[i] - ('a' - 'A');
			start = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (!start)
				str[i] = str[i] + ('a' - 'A');
			start = 0;
		}
		else
			start = 1;
		i++ ;
	}	
	return (str);
}

// int main (void)
// {
// char str1[] = "i, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
// char str2[] = "hello wORD!!";
// char str3[] = "";
// char str4[] = "already UPPERCASE";
// printf("%s\n", ft_strcapitalize(str1));
// printf("%s\n", ft_strcapitalize(str2));
// printf("%s\n", ft_strcapitalize(str3));
// printf("%s\n", ft_strcapitalize(str4));
// }
