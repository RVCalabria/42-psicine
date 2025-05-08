/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:39:06 by rcalabri          #+#    #+#             */
/*   Updated: 2025/05/01 16:49:59 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++ ;
	}
	return (dest);
}

// int main (void)
// {
// 	char src[] = "testando texto 0123456789";
// 	char dest[20];
// 	ft_strncpy(dest, src, 15);
// 	printf("src: %s\n", src);
// 	printf("dest: %s\n", dest);
// }
