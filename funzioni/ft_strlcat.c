/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:16:50 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 22:16:50 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lunghezza_dst;
	size_t	lunghezza_src;
	size_t	i;

	lunghezza_dst = 0;
	lunghezza_src = 0;
	i = 0;
	while (dst[lunghezza_dst])
		lunghezza_dst++;
	while (src[lunghezza_src])
		lunghezza_src++;
	if (size <= lunghezza_dst)
		return (size + lunghezza_src);
	while (lunghezza_dst + i < size - 1 && src[i])
	{
		dst[lunghezza_dst + i] = src[i];
		i++;
	}
	dst[lunghezza_dst + i] = '\0';
	return (lunghezza_dst + lunghezza_src);
}
