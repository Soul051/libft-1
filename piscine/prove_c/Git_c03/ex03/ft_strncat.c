/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:04:05 by galorenz          #+#    #+#             */
/*   Updated: 2025/11/03 15:04:06 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < nb)
	{
		dest[b + a] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
/*int	main(void)
{
	char parola1[20] = "ciao ";
	char parola2[] = "tutti";
	int	num; 
	num = 1;

	ft_strncat( parola1, parola2, num);
	printf( "%s\n", parola1);
}*/
