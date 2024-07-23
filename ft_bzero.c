/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:31:31 by slangero          #+#    #+#             */
/*   Updated: 2024/05/05 12:32:04 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*char_ptr;

	char_ptr = (char *)s;
	while (n--)
		*char_ptr++ = 0;
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
// We cast s to char* because in C, a char is 1 byte.
