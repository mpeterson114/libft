/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:13:34 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/07 13:48:33 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

char	**ft_split(char const *s, char c)
{
	int	len;
	int *count;
	char **strings;
	int	i;

	len = ft_strlen(s);
	i = 0;
	*count = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (ft_strchr(s[i], c) == NULL)
				break;
			i++;
		}
		while (i < len)
		{
			if (ft_strchr(s[i], c) != NULL)
				break;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			if (i > old_i)
				*count = *count + 1;
		}
	}

	char **strings = malloc(sizeof(char *) * *count);
	char buffer[164839];
	int	string_index;
	int	j;

	string_index = 0;
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (ft_strchr(s[i], c) == NULL)
				break;
			i++;
		}
		j = 0;
		while (i < len)
		{
			if (ft_strchr(s[i], c) != NULL)
				break;
			i++;
			buffer[j] = s[i];
			i++;
			j++;
		}
		if (j > 0)
		{
			buffer[j] = '\0';

			int	to_allocate = sizeof(char) * (ft_strlen(buffer) + 1);
			strings[string_index] = malloc(to_allocate);
			strcpy(strings[string_index], buffer);
			string_index++;
		}
	}
	return(strings);
}

int main()
{
	const char s[] = "hey hi hello";
	char c = ' ';
	printf("%s\n", ft_split(s, c));
	return 0;
}
