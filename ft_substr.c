/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:05:52 by htkyaw            #+#    #+#             */
/*   Updated: 2026/09/10 17:43:29 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*s_str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		s_str = (char *)malloc(sizeof(char) * 1);
		if (!s_str)
			return (NULL);
		s_str[0] = '\0';
		return (s_str);
	}
	if (len > s_len - start)
		len = s_len - start;
	s_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!s_str)
		return (NULL);
	ft_memcpy(s_str, s + start, len);
	s_str[len] = '\0';
	return (s_str);
}
