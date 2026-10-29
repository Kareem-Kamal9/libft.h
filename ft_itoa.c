/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 13:46:59 by marvin            #+#    #+#             */
/*   Updated: 2026/10/11 13:46:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_size(long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*convert(char *p, long n, size_t size)
{
	size_t	stop;

	stop = 0;
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
		stop = 1;
	}
	p[size] = '\0';
	while (size > stop)
	{
		size--;
		p[size] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	size_t	n_len;
	char	*str;
	long	num;

	num = (long)n;
	n_len = num_size(num);
	str = malloc(n_len + 1);
	if (!str)
		return (NULL);
	convert(str, num, n_len);
	return (str);
}
/*
int	main()
{
	char	*str;
	str = ft_itoa(-583);
	printf("Result: %s\n", str);
	free(str);
	return (0);
}*/