/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:04:39 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 15:04:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_llist;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_llist = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_llist, del);
			return (NULL);
		}
		ft_lstadd_back(&new_llist, new_node);
		lst = lst->next;
	}
	return (new_llist);
}
/*void	*to_upper(void *content)
{
	char	*str;
	char	*result;
	int		i;

	str = (char *)content;
	result = malloc(ft_strlen(str) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = (char)toupper((unsigned char)str[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

void	del_content(void *content)
{
	free(content);
}

int	main()
{
	t_list	*lst;
	t_list	*node2;
	t_list	*node3;
	t_list	*result;

	lst = ft_lstnew("kareem");
	node2 = ft_lstnew("ahmad");
	node3 = ft_lstnew("omar");
	if (!lst || !node2 || !node3)
		return (free(lst), free(node2), free(node3), 1);
	lst->next = node2;
	node2->next = node3;
	result = ft_lstmap(lst, to_upper, del_content);
	while (result)
	{
		printf("%s\n", (char *)result->content);
		result = result->next;
	}
	return (0);
}*/