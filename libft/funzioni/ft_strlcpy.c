/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:16:48 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 22:16:48 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy (char *dst, const char *src, size_t n)
{
    size_t i;
    size_t lunghezza_src; 

    lunghezza_src = 0;
    i = 0;
    while(src[lunghezza_src] != '\0')
        lunghezza_src++;
    
    while (i < n -1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0'; //la stringa deve sempre terminare con lui altrimenti non termina
    return(lunghezza_src);

}