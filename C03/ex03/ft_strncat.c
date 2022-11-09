/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:33:39 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/25 16:33:49 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	i = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0' && nb > 0)
	{
		dest[i] = src[x];
		i++;
		x++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "hello";
	char	src[] = "howdy";

	printf("%s", ft_strncat(dest, src, 2));
}*/
