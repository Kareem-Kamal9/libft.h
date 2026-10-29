/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:24:28 by marvin            #+#    #+#             */
/*   Updated: 2026/10/15 14:24:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	p = malloc(end - start + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1 + start, end - start);
	p[end - start] = '\0';
	return (p);
}

/*int	main()
{
	char	*result;

	result = ft_strtrim("!!kareem!!", "!");
	if (!result)
		return (1);
	printf("%s\n", result);
	free(result);
	return (0);
}*/