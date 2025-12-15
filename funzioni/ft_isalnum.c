/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galorenz <galorenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:45:18 by galorenz          #+#    #+#             */
/*   Updated: 2025/12/15 23:23:02 by galorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (( a >= 65 && a <= 90) || ( a >= 97 && a <= 122) ||
	(a >= 48 && a <= 57))
		return(1);
	return(0);
}
int	main()
{
	printf("%d\n", ft_isalnum(42));
	printf("%d\n", ft_isalnum(55));
	printf("%d\n", ft_isalnum(75));
}
