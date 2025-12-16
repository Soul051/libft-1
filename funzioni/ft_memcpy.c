/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:00:26 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/16 18:49:10 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = dest;
	b = src;
	while (n > 0)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (dest);
}
/*
int    main(void)
 {
	 char parola[] = "ciao";
	 char destinazione[20] = {};
	 char parola1[] = "ciao";
	 char destinazione1[20] = {};
	 ft_memcpy(destinazione, parola, 2);
	 printf("parola: %s\n", parola);
	 printf("parola2: %s\n", destinazione);
	
	 ft_memcpy1(destinazione1, parola1, 2);
	 printf("parola: %s\n", parola1);
	 printf("parola2: %s\n", destinazione1);
 }*/