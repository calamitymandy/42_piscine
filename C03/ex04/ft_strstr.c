/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:02:11 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/25 16:35:49 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[x] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && str[i + x] != '\0')
		{
			x++;
			if (to_find[x] == '\0')
				return (str + i);
		}
		i++;
		x = 0;
	}
	return (0);
}

/*int	main(void)
{
	char	str[] = "si es que funciona";
	char	to_find[] = "es";

	printf("%s", ft_strstr(str, to_find));
}*/
