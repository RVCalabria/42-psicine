/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:47:49 by rcalabri          #+#    #+#             */
/*   Updated: 2025/05/01 16:50:44 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*for_dest;

	for_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++ ;
		src++ ;
	}
	*dest = '\0';
	return (for_dest);
}

// int main (void)
// {
// 	char src[] = "teste teste teste";
// 	char dest[50];
// 	ft_strcpy(dest, src);
// 	printf("src: %s\n",  src);
// 	printf("dest: %s\n", dest);
// 	return (0);
// }
