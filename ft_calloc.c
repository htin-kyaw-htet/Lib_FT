/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 14:41:33 by htkyaw            #+#    #+#             */
/*   Updated: 2026/09/10 11:19:12 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	sum;
	void	*ptr;

	if (size && nmemb > (size_t)-1 / size)
		return (NULL);
	sum = nmemb * size;
	ptr = malloc(sum);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, sum);
	return (ptr);
}
