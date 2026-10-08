/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kakamal <kakamal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:43:24 by kakamal           #+#    #+#             */
/*   Updated: 2026/09/29 19:24:55 by kakamal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_isalnum(int c);
int		ft_isdigit(int d);
int		ft_isalpha(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

#endif