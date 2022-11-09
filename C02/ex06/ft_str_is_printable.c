/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:20:06 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/23 22:13:57 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 126 && str[i] >= 32)
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("ABCR"));
	printf("%d\n", ft_str_is_printable("\n\t\v\f"));
}*/
