/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 11:38:12 by htkyaw            #+#    #+#             */
/*   Updated: 2026/09/10 16:55:54 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	d = malloc(len + 1);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s, (len + 1));
	return (d);
}
