/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 17:07:06 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 23:22:56 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (!(a >= 0 && a <= 127))
	return (0);
return(1);
}
int	main()
{
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(22));
	printf("%d\n", ft_isascii(129));
}

