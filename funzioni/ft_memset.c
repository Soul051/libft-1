/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:36:51 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 22:17:34 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*z;
	unsigned char	y;

	z = s;
	y = c;
	while (n > 0)
	{
		*z = y;
		z++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char parola[] = "lonely vampire";
	printf("parola prima: %s\n", parola);
	ft_bzero(parola, 3);
	printf("parola dopo: %s\n", parola);
	
}*/