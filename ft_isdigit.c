/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakamal <kakamal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:57:11 by kakamal           #+#    #+#             */
/*   Updated: 2026/09/24 18:17:55 by kakamal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	return (0);
}

/*int	main()
{
	printf("%d\n", ft_isdigit('5'));
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit(' '));
	return (0);
}*/
