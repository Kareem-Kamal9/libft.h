/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:04:59 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 15:04:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*int	main()
{
	int		number;
	t_list	*node;

	number = 42;
	node = ft_lstnew(&number);
	if (!node)
		return (1);
	printf("Content: %d\n", *(int *)node->content);
	printf("Next: %p\n", (void *)node->next);
	free(node);
	return (0);
}*/