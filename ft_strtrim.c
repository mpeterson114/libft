/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlpeterson114 <mlpeterson114@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:31:22 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/05 20:26:59 by mlpeterson1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


char    *ft_strtrim(char const *s1, char const *set)
{
    char    *new_str;
    size_t  i;
    size_t  j;

    new_str = (char *)malloc(ft_strlen(s1) - ft_strlen(set) + 1);
    if (new_str == 0)
        return (NULL);
    
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] != set[j])
	{
            new_str[i] = s1[i];
		i++;
	}
        i++;
	j++;
    }
    new_str[i] = '\0';
    return (new_str);
}

int main()
{
    char const s1[] = "happy birthday";
    char const set[] = "happy";
    printf("%s", ft_strtrim(s1, set));
    return 0;

}
