/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 17:07:29 by htkyaw            #+#    #+#             */
/*   Updated: 2026/09/10 18:08:56 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long nb)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*ptr;
	long	nb;

	nb = n;
	len = get_len(nb);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (nb == 0)
		ptr[0] = '0';
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		len--;
		ptr[len] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (ptr);
}
