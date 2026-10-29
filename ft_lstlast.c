/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:03:18 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 17:03:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*int	main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;

	last = ft_lstlast(NULL);
	if (last == NULL)
		printf("NULL test passed\n");
	node1 = ft_lstnew("First Node");
	node2 = ft_lstnew("Second Node");
	node3 = ft_lstnew("Last Node");
	if (!node1 || !node2 || !node3)
		return (1);
	node1->next = node2;
	node2->next = node3;
	last = ft_lstlast(node1);
	if (last)
		printf("Last node: %s\n", (char *)last->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/