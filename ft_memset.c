/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:17:22 by slangero          #+#    #+#             */
/*   Updated: 2024/05/05 16:46:24 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*str_ptr;

	str_ptr = (char *)str;
	while (len > 0)
	{
		str_ptr[len - 1] = (unsigned char)c;
		len--;
	}
	return (str);
}

/*
cast str en char* ou unsigned char* (et cast c en unsigned char?)
*/