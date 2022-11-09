/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:24:25 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/24 00:03:52 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = 0;
	i = 0;
	while (src[x])
		x++;
	if (size < 1)
		return (x);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (x);
}

/*int	main(void)
{
	char	src[] = "kuku";
	char	dest[] = "biboubalalilo";

	printf("%d | %s", ft_strlcpy(dest, src, 20), dest);
}*/
