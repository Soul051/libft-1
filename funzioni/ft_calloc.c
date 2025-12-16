/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 21:16:28 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/16 20:22:08 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	totale;
	void	*puntatore;

	totale = num * size;
	puntatore = malloc(totale);
	if (puntatore == NULL)
		return (NULL);
	ft_memset(puntatore, 0, totale);
	return (puntatore);
}
