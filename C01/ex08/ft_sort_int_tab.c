/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 18:25:58 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/19 18:47:19 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	search;
	int	swap;

	while (size >= 0)
	{
		search = 0;
		while (search < size - 1)
		{
			if (tab[search] > tab[search + 1])
			{
				swap = tab[search];
				tab[search] = tab[search + 1];
				tab[search + 1] = swap;
			}
			search++;
		}
		size--;
	}
}

/*int	main(void)
{
	int	tab[7] = {5, 3, 2, 7, 1, 45, 13};
	int	size = 7;

	ft_sort_int_tab(tab, size);
	printf("\%d, tab[0]);
	printf("\%d, tab[1]);
	printf("\%d, tab[2]);
	printf("\%d, tab[3]);
	printf("\%d, tab[4]);
	printf("\%d, tab[5]);
	printf("\%d, tab[6]);
	return (0);
}*/
