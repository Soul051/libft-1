/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:17:17 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 22:17:17 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 char *ft_strchr(const char *s, int c)
 {
    unsigned char carattere;
    const char *posiz;

    carattere = (unsigned char)c; //conversione
    posiz = s;

    while(*posiz != '\0') 
    {
            if ((unsigned char)*posiz == carattere) // carattere trovato = return punt
                return((char *)posiz);
            posiz++;
    }

    if (carattere == '\0')
        return ((char *)posiz);

    return(NULL);
 }
 