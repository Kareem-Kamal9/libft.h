/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakamal <kakamal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:12:23 by kakamal           #+#    #+#             */
/*   Updated: 2026/10/05 18:05:59 by kakamal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main()
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint(31));
	return (0);
}*/
