/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:36:50 by galorenz          #+#    #+#             */
/*   Updated: 2025/11/04 14:36:51 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while ( str[cont] != '\0')
		cont ++;
	return (cont);
}
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int dest_lun;
	unsigned	int src_lun;
	unsigned int p;
	dest_lun = ft_strlen(dest);
	src_lun = ft_strlen(src);
	p = 0;
	if (size <= dest_lun)
		retunr ( size + src_lun);
	while ( p < size - dest_lun - 1 && src[p])
	{
		dest[dest_lun + p] =  src[p];
		p ++;
	}
	dest[dest_lun + p] = '\0';
	return ( dest_lun + src_lun);
}

int	main(void)
{
	char parola1[] = "qualcosa"
	char parola2[] = "aaaaa"
	unsigned int	result
	result = ft_strlcat(dest, src, 10);
	printf("%s\n", dest);
	printf("%d\n", result);
	return(0);
	
}
