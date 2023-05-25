/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:44:06 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/15 14:08:20 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	num;

	num = 0;
	while (src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	dest[num] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Este es el texto";
	char	dest[] = "          ";

	ft_strcpy(dest, src);
	printf("%s", dest);
	return(0);
}
*/