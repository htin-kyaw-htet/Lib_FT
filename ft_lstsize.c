/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 13:08:36 by htkyaw            #+#    #+#             */
/*   Updated: 2026/09/10 14:18:46 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	i;
	t_list	*curr;

	i = 0;
	curr = lst;
	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
