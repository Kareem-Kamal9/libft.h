/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakamal <kakamal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 16:49:31 by kakamal           #+#    #+#             */
/*   Updated: 2026/10/08 16:52:02 by kakamal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	i;
	char	*p;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	p = malloc(size + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*int	main()
{
	char	*dup = ft_strdup("Hello 42");
	printf("%s\n", dup);
	free(dup);
	return (0);
}*/