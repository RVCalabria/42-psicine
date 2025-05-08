/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:36:58 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/22 19:37:02 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	troca;
	int	temp;

	i = 0;
	while (i < size -1 && troca)
	{
		j = 0;
		troca = 0;
		while (j < size - i - 1)
		{			
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j +1];
				tab[j + 1] = temp;
				troca = 1;
			}
			j++;
		}
		i ++;
	}
}

// int main() 
// {
//    int meu_array[] = {5, 2, 5, 1, 5, 4};
//    int tamanho = sizeof(meu_array) / sizeof(meu_array[0]);
//    printf("Array original: ");
//    for (int i = 0; i < tamanho; i++) {
//        printf("%d ", meu_array[i]);
//    }
//    printf("\n");
//    ft_sort_int_tab(meu_array, tamanho);
//    printf("Array ordenado (crescente): ");
//    for (int i = 0; i < tamanho; i++) {
//        printf("%d ", meu_array[i]);
//    }
//    printf("\n");
//    return 0;
// } 