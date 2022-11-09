/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amdemuyn <amdemuyn@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:28:17 by amdemuyn          #+#    #+#             */
/*   Updated: 2022/07/23 21:47:14 by amdemuyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Vamos a ver !";
	char	dest[] = "plouf";

	printf("%s\n", ft_strncpy(dest, src, 3));
	printf("%s\n", ft_strncpy(dest, src, 5));
	printf("%s\n", ft_strncpy(dest, src, 20));
}*/
