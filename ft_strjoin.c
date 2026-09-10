/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:06:16 by htkyaw            #+#    #+#             */
/*   Updated: 2026/09/10 17:44:05 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*sum;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	sum = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!sum)
		return (NULL);
	ft_memcpy(sum, s1, len1);
	ft_memcpy(sum + len1, s2, len2);
	sum[len1 + len2] = '\0';
	return (sum);
}
