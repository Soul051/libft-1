/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 19:14:50 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/09 18:10:11 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t	cont;
	size_t lunghezza;
	char *destinazione;
	
	cont = 0;
	lunghezza = ft_strlen(s);
	
	if (!s)
		return(NULL);
	destinazione = (char*)malloc(lunghezza + 1);

	while (s[cont] != '\0')
	{
		destinazione[cont] = s[cont];
		cont++;
	}

	destinazione[cont] = '\0';
	
	return(destinazione);
}

/*int main()
{
	char *parola = "123uasd !";
	char *copia1;
	char *copia2;
	
	copia1 = ft_strdup(parola);
	copia2 = strdup(parola);
	
	printf("Originale: %s\n", parola);
	printf("ft_strdup: %s\n", copia1);
	printf("   strdup: %s\n", copia2);
	free(copia1);
	free(copia2);
	
}*/