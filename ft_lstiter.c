/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:04:19 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 15:04:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main()
{
	t_list	*lst;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	lst = ft_lstnew("Kareem");
	node1 = lst;
	node2 = ft_lstnew("Ahmad");
	node3 = ft_lstnew("Omar");
	if (!node1 || !node2 || !node3)
		return (1);
	node1->next = node2;
	node2->next = node3;
	ft_lstiter(lst, print_content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/