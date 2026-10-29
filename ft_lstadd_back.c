/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:03:22 by marvin            #+#    #+#             */
/*   Updated: 2026/10/26 15:03:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*int	main()
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("Kareem");
	b = ft_lstnew("Basil");
	if (!a || !b)
	{
		free(a);
		free(b);
		return (1);
	}
	ft_lstadd_back(&a, b);
	printf("First: %s\n", (char *)a->content);
	printf("Last: %s\n", (char *)ft_lstlast(a)->content);
	printf("Last next: %p\n", (void *)ft_lstlast(a)->next);
	free(b);
	free(a);
	return (0);
} */