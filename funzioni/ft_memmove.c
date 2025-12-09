/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:37:06 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 22:27:04 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove( void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned  char *s;
	size_t i;
	
	d = dest;
	s = src;
	i = 0;

	
	if(d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
		else 
		{
			i = n; // diventa uguale alla n e se dobbiamo copiare tornando indietro
			while (i > 0)
			{
				i--; // decremento 
				d[i] = s[i];
			}
		}
	

	return(dest);
}
