/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:16:28 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 23:23:05 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void *ft_calloc(size_t num, size_t size)
 {
	size_t totale;
	void *puntatore;

	totale = num * size; // calcola dim

	puntatore = malloc(totale);

	if (puntatore == NULL) // se fallisce da null = no memoria
	return(NULL);

//    ft_bzero(puntatore, totale);
	ft_memset(puntatore, 0, totale); //azzera i bite 

	return(puntatore);
 }