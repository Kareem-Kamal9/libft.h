/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakamal <kakamal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 15:47:24 by kakamal           #+#    #+#             */
/*   Updated: 2026/10/03 16:00:39 by kakamal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	const unsigned char	*s;
	size_t				i;

	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*int	main()
{
	char	str[] = "kareem";
	char	*result;

	result = ft_memchr(str, 'l', 4);
	if (result != NULL)
		printf("Found: %c\n", *result);
	else
		printf("Not found\n");
	return (0);
}*/
