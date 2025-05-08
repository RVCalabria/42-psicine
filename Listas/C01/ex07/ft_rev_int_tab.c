/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalabri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:36:04 by rcalabri          #+#    #+#             */
/*   Updated: 2025/04/22 17:36:09 by rcalabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rew_int_tab(int *tab, int size);

void	ft_rew_int_tab(int *tab, int size)
{
	int	*fim;
	int	t;

	fim = tab + size -1;
	while (tab < fim)
	{
		t = *tab;
		*tab = *fim;
		*fim = t;
		tab ++;
		fim--;
	}
}

// int main(void)
// {
// 	int ary[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
// 	int tm;
// 	int i;
// 	tm = sizeof (ary) / sizeof (ary[0]);
// 	i = 0;
// 	while (i <+ tm)
// 	{
// 		printf("%d\n", ary[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_rew_int_tab(ary, tm);
// 	i = 0;
// 	while (i < tm)
// 	{
// 		printf("%d\n", ary[i]);
// 		i ++;
// 	}
// 	printf("\n");
// }