/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:15:19 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/04 22:15:19 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *result;
    char carattere;

    result = ( char *)s; //convert
    carattere = (char)c;

    while (*result != '\0') //fine stringa
        result++;
    
    while (result >= s) //cerca al contrario tornando indietro
    {
        if (*result == carattere)
            return((char *)result);
        result--;
    }
    return(NULL);
}