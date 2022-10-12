/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:55:42 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/12 13:15:15 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wdcount(const char *str, char c)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (*str)
	{
		if (*str != c && index == 0)
		{
			index = 1;
			count++;
		}
		else if (*str == c)
			index = 0;
		str++;
	}
	return (count);
}

static char	*ft_wdcpy(const char *str, size_t start, size_t end)
{
	unsigned int	i;
	char	*word;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return(word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	num_w;
	char **strings;
	int	index;

	num_w = ft_wdcount(s, c);
	if (!s || !(strings = malloc((num_w + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			strings[j++] = ft_wdcpy(s, index, i);
			index = -1;
		}
		i++;
	}
	strings[j] = 0;
	return(strings);
}

/*int main()
{
	const char s[] = " hey hi hello";
	char c = ' ';
	char **word_split;
	word_split = ft_split(s, c);
	printf("%s\n", word_split[0]);
	printf("%s\n", word_split[1]);
	printf("%s\n", word_split[2]);
	return 0;
}*/
