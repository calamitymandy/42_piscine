/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:42:57 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/13 18:05:38 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ndouble(int n)
{
	char	db1;
	char	db2;

	db1 = n / 10 + '0';
	db2 = n % 10 + '0';
	write(1, &db1, 1);
	write(1, &db2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 100)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_ndouble(a);
			write(1, " ", 1);
			ft_ndouble(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
