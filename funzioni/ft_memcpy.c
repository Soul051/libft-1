/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 18:00:26 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 23:22:35 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	char *d;
	const char *s;
	
	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}*/
 void *ft_memcpy(void *dest, const void *src, size_t n)
 {
	 unsigned char *a;
	 const unsigned char *b;
	 
	 a = dest;
	 b = src;
	 while (n > 0)
	 {
		  *a = *b;
		  a++;
		  b++;
		  n--;
	 }
	 return(dest);
 }
 
 /*int    main(void)
 {
	 char parola[] = "ciao";
	 char destinazione[20] = {}; // metti graffa che vuold dire che e' vuoto e si puo' copiare al suo interno
	 ft_memcpy(destinazione, parola, 2);
	 printf("parola: %s\n", parola);
	 printf("parola2: %s\n", destinazione);
 }*/