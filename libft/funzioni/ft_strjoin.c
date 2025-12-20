/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:22:29 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 23:09:45 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_lung;
	size_t	s2_lung;
	char	*str;
	size_t	tot_lung;

	s1_lung = ft_strlen(s1);
	s2_lung = ft_strlen(s2);
	tot_lung = s1_lung + s2_lung;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		ft_strjoin("", s2);
	if (!s2)
		ft_strjoin(s1, "");
	str = (char *)malloc(tot_lung + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, s1_lung + 1);
	ft_strlcpy(str + s1_lung, s2, s2_lung + 1);
	return (str);
}
/*int main()
{
	char *parola = "123uasd !";
	char *parola2 = "aaaaa";
	
	parola = ft_strjoin(parola, parola2);
	
	printf("Originale: %s\n", parola);
	free(parola);
	
}*/