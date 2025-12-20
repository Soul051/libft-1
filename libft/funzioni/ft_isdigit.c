/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:40:02 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/16 20:14:12 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (!(a >= 48 && a <= 57))
		return (0);
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isdigit(48));
	printf("%d\n", ft_isdigit(55));
	printf("%d\n", ft_isdigit(75));
}*/
