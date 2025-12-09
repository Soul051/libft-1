/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:06:24 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/06 21:08:06 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	cont;

	cont = 0;
	if (n == 0)
		return (0);
	while (s1[cont] == s2[cont] && s1[cont] != '\0' && cont < n - 1)
	{
		cont++;
	}
	return (s1[cont] - s2[cont]);
}
/*int	main(void)
{
	char parola[] = "aaaa";
	char parola2[] = "vcvc";
	int	num; 
	num = 3;

	printf( "%d\n", ft_strncmp(parola, parola2, num));
}*/
