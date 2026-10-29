/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:04:07 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 15:04:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	if (lst->content)
		(*del)(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	free(content);
}

int	main()
{
	t_list	*node;

	node = ft_lstnew(ft_strdup("Kareem"));
	if (!node)
		return (1);
	printf("Before: %s\n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("Node deleted successfully!\n");
	return (0);
}*/