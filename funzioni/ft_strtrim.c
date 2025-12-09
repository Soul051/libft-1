/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 19:44:46 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/09 20:04:40 by galorenz         ###   ########.fr       */
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

    if(!s1 || !set)
        return(NULL);
    s1_lung = ft_strlen(s1);
    fine = s1_lung;
}