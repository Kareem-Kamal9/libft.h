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

void	*ft_memcher(const void *src, int c, size_t n)
{
	const char	*s;
	size_t		i;

	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return ((void *d) & s[i]);
		i++;
	}
	return (NULL);
}
