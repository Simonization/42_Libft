/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:31:31 by slangero          #+#    #+#             */
/*   Updated: 2024/04/24 16:12:01 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    // We cast s to char* because in C, a char is 1 byte.
    char *char_ptr = (char *)s;

    // Set each byte to zero
    while (n--)
    {
        *char_ptr++ = 0;
    }
}
/*
maniere de vicente:
void	ft_bzero(void *ptr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(ptr + i) = 0;
		i++;
	}
}*/