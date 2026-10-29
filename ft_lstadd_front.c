/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:03:37 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 15:03:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main()
{
	char	*str;
	t_list	*node;

	str = "Kareem";
	node = ft_lstnew(str);
	if (!node)
		return (1);
	printf("Content: %s\n", (char *)node->content);
	printf("Next: %p\n", (void *)node->next);
	free(node);
	return (0);
}*/