/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlpeterson114 <mlpeterson114@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:30:29 by mpeterso          #+#    #+#             */
/*   Updated: 2022/10/23 18:11:34 by mlpeterson1      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	sign = 1;
	if (str[i] != '\0' && str[i] == '-')
	{
		sign = -1;
		i++;
	}	
	if (str[i] != '\0' && str[i] == '+')
		i++;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int main()
{
	const char str[] = " +1";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}
