/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:07:04 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/22 17:16:57 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
char n;

n = '9';
while (n >= '0')
	{
		write(1, &n, 1);
		n--;
	}
write(1, "\n", 1);
return (0);
}