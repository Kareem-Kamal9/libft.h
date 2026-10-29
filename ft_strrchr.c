/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakamal <kakamal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:59:13 by kakamal           #+#    #+#             */
/*   Updated: 2026/09/28 18:21:36 by kakamal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	if (!s)
		return (NULL);
	ch = (unsigned char)c;
	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*int main()
{
    char *result;

    result = ft_strrchr("banana", 'a');
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");
    return (0);
}*/