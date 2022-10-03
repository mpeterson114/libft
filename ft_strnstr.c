/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:28:57 by mpeterso          #+#    #+#             */
/*   Updated: 2022/09/26 12:29:50 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t h;
	size_t n;

	h = 0;
	if (needle == NULL)
		return(char *)haystack;
	while (haystack[h] != '\0')
	{ 
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if(haystack[h + n] == '\0' && needle[n] == '\0')
				return(char *)&haystack[h];
			n++;
		}
		if (needle[n] == '\0')
			return((char*)haystack + h);
		h++;
	}
	return(NULL);
}

int main()
{
	const char haystack[] = "what's up";
	const char needle[] = "up";
	size_t len = 10;
	printf("%s", ft_strnstr(haystack, needle, len));
	return 0;}
