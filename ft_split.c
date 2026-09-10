/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htkyaw <htkyaw@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 18:07:17 by htkyaw            #+#    #+#             */
/*   Updated: 2026/09/10 18:07:18 by htkyaw           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_words(char **result, int word_index)
{
	while (word_index > 0)
		free (result[--word_index]);
	free(result);
}

static int	fill_words(char **result, char const *s, char c)
{
	int	i;
	int	len;
	int	word_index;

	i = 0;
	word_index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			len = word_len(&s[i], c);
			result[word_index] = ft_substr(s, i, len);
			if (result[word_index] == NULL)
			{
				free_words(result, word_index);
				return (0);
			}
			word_index++;
			i = i + len;
		}
		else
			i++;
	}
	result[word_index] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**result;

	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (!fill_words(result, s, c))
		return (NULL);
	return (result);
}
