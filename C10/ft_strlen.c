/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:08:02 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/09 18:21:36 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}

/*int	main(void)
{
	char	*str;

	str = "Holi";
	printf("Hay: %d caracteres", ft_strlen(str));
	return (0);
}
*/