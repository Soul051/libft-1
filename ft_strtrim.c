/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:44:46 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/12 19:00:55 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t inizio;
    size_t fine;
    size_t s1_lung;
    size_t cont;
    size_t lung;
    
    s1_lung = ft_strlen(s1);
    inizio = 0;

    if(!s1 || !set)
        return(NULL);



    
    str = (char *)malloc(lung +1);
    if ( str == NULL)
        return (NULL);


    ft_strlcpy(str,);
    return(str);
}