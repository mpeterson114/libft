/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trimpractice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:04:25 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/07 14:14:09 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numwords(const char *s, char c)
{
	size_t	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (i > 0 && s[i] && s[i - 1] == c)
			count++;
		if (s[i])
			i++;
	}
	if (count == 0 && s[i - 1] == c)
		return(0);
	if (s[0] != c)
		count++;
	return(count);
}

/*static char	**ft_buffer(char **strings, const char *s, char c)
{
	int	wds;
	char	buffer[];
	int	str_i;
	int	j;

	wds = ft_numwords(s, c);
	strings = malloc(sizeof(char *) * (wds + 1));
	str_i = 0;
	i = 0;

	while (s[i])
	{
		while (s[i] == c)
			
*/	

int main()
{
	const char s[] = " hey hi hello";
	char c = ' ';
	printf("%d", ft_numwords(s, c));
	return 0;
}
