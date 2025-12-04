/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:57:47 by galorenz          #+#    #+#             */
/*   Updated: 2025/11/26 17:59:22 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isalpha(int a)
{
	if (!( a >= 65 && a <= 90) || ( a >= 97 && a <= 122))
		return(0);
	return(1);
}

int	main()
{
	printf("%d\n", ft_isalpha(65));
	printf("%d\n", ft_isalpha(22));
	printf("%d\n", ft_isalpha(75));
}
