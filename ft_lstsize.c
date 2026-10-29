/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:05:10 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 15:05:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (!lst)
		return (0);
	i = 1;
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int	main()
{
	t_list	*lst;
	t_list	*node2;
	t_list	*node3;

	lst = ft_lstnew("Kareem");
	node2 = ft_lstnew("Ahmad");
	node3 = ft_lstnew("Omar");
	if (!lst || !node2 || !node3)
	{
		free(lst);
		free(node2);
		free(node3);
		return (1);
	}
	lst->next = node2;
	node2->next = node3;
	printf("List size: %d\n", ft_lstsize(lst));
	free(node3);
	free(node2);
	free(lst);
	return (0);
}*/