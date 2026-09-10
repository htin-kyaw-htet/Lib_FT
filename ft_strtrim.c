/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 17:53:24 by htkyaw            #+#    #+#             */
/*   Updated: 2026/09/10 17:53:25 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1);
	if (end > 0)
		end--;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (s1[start] == '\0')
		len = 0;
	else
		len = end - start + 1;
	return (ft_substr(s1, start, len));
}
