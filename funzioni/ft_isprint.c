/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:55:22 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 23:22:49 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int a)
{
	if (!(a >= 32 && a <= 126))
		return (0);
return(1);
}
int	main()
{
	printf("%d\n", ft_isprint(126));
	printf("%d\n", ft_isprint(0));
	printf("%d\n", ft_isprint(124));
}

