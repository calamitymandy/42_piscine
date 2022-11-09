/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:19:40 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/19 18:42:58 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = swap;
		i++;
	}
}

/*int	main(void)
{
	int	tab[5] = {0, 1, 2, 3, 4};
	int	size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
}*/
