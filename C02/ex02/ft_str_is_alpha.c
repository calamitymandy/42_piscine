/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:54:44 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/23 21:51:32 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_alpha("abcdefghijklmnop"));
	printf("\n%d", ft_str_is_alpha("aaaaaaa"));
	printf("\n%d", ft_str_is_alpha(""));
	printf("\n%d", ft_str_is_alpha("-126!?cdef"));
}*/
