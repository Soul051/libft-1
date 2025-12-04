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

size_t ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t lunghezza_dst;
    size_t lunghezza_src;
    size_t i;

    lunghezza_dst = 0;
    lunghezza_src = 0;
    i = 0;

    while(dst[lunghezza_dst]) //calcola lunghezza
        lunghezza_dst++;
    
    while(src[lunghezza_src]) //calcola lunghezza
        lunghezza_src++;
    
    if (n <= lunghezza_dst) //se non c'e' spazio
        return (n + lunghezza_src);
    
    while (lunghezza_dst + i < n - 1 && src[i])
    {
        dst[lunghezza_dst + i] = src[i]; //copia dalla fine di dst senza + lunghezza sovrascriveva
        i++;
    }
    
    dst[lunghezza_dst + i] = '\0';

    return(lunghezza_dst + lunghezza_src);
}
