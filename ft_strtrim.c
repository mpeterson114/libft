/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:31:22 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/20 12:04:41 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	len;

	len = (ft_strlen(s1) - ft_strlen(set));
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len)
	{
		if (s1[i] != set[j])
		{
			new_str[i] = s1[i];
		}
		i++;
		j++;
	}	
	new_str[len] = '\0';
	return (new_str);
}

/*int main()
{
    char const s1[] = "happy birthday";
    char const set[] = "hap";
    printf("%s", ft_strtrim(s1, set));
    return 0;
}*/