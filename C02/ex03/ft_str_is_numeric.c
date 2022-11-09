/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:14:10 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/23 21:56:10 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_numeric("12945896"));
	printf("%d\n", ft_str_is_numeric("abc-"));
	printf("%d\n", ft_str_is_numeric(""));
}*/
