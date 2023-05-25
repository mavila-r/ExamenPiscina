/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 11:39:23 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/23 11:50:09 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
int n;
char *str;

str = argv[1];
if (argc != 2)
{
	write(1, "\n", 1);
}
	n = 0;
	while (str[n] != '\0')
	{
	if (str[n] >= 97 && str[n] <= 122)
	{
		str[n] = str[n] - 32;
	}
	else if (str[n] >= 65 && str[n] <= 90)
	{
		str[n] = str[n] + 32;
	}
	write(1, &str[n], 1);
	n++;
	}

}