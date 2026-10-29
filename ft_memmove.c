/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakamal <kakamal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:34:09 by kakamal           #+#    #+#             */
/*   Updated: 2026/10/05 17:07:17 by kakamal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}
/*
int	main()
{
	char	str[] = "ABCDE";

	ft_memmove(str + 1, str, 4);
	printf("%s\n", str);
	return (0);
}*/
