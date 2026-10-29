/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:03:53 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 15:03:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
	*lst = NULL;
}
/*

void	del(void *content)
{
	free(content);
}

int	main()
{
	t_list	*lst;

	lst = ft_lstnew(strdup("Kareem"));
	if (!lst)
		return (1);
	lst->next = ft_lstnew(strdup("basil"));
	if (!lst->next)
	{
		free(lst->content);
		free(lst);
		return (1);
	}
	ft_lstclear(&lst, del);
	if (!lst)
		printf("List cleared successfully!\n");
	else
		printf("List was not cleared.\n");
	return (0);
}*/