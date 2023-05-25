/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavila-r <mavila-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:45:47 by mavila-r          #+#    #+#             */
/*   Updated: 2023/02/23 17:26:48 by mavila-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		n;

n = 0;
	while (src[n] != '\0')
		n++;
dest = (char *) malloc(n + 1);
	if (dest == NULL)
		return (NULL);	
	while (src[n] != '\0')
	{
	dest[n] = src[n];
	n++;
	}
dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
char	src[] = "Este es el string";
char	*nstr;

nstr = ft_strdup(src);

printf("%s\n", nstr);
return(0);
}
*/