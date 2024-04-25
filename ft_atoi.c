/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:43:51 by slangero          #+#    #+#             */
/*   Updated: 2024/04/24 16:14:59 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	long	nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb *= 10;
		nb += str[i] - 48;
		if ( nb < 0 && sign == -1)
			return (0);
		if ( nb < 0 && sign == 1)
			return (-1);
		i++;
	}
	return (nb * sign);
}
#include <stdio.h>
int main(void)
{
	printf("integer is :%d\n", ft_atoi("   78512144544444444444444444444444"));
	return (0);
}
