/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:47:22 by hkyawh            #+#    #+#             */
/*   Updated: 2026/09/10 11:12:56 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	if (dest == src || n == 0)
		return (dest);
	if (pdest < psrc)
	{
		while (n--)
			*pdest++ = *psrc++;
	}
	else
	{
		pdest += n;
		psrc += n;
		while (n--)
			*(--pdest) = *(--psrc);
	}
	return (dest);
}
