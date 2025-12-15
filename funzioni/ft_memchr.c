/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:03:26 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 19:03:26 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *pos; //  con void si mette unsigned
	char cercato;
	size_t i;

	pos = (const unsigned char *)s;
	cercato = (char)c;
	i = 0;

	while (i < n)
	{
		if (pos[i] == cercato)
			return((void *)&pos[i]);
		i++;
	}
	return(NULL);
}