/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 12:47:17 by hkyawh            #+#    #+#             */
/*   Updated: 2026/09/10 11:12:56 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	sum;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	src_len = strlen(src);
	dest_len = strlen(dest);
	if (size > dest_len)
		sum = dest_len + src_len;
	else
		sum = src_len + size;
	while (src[i] && size > (dest_len + 1))
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (sum);
}
