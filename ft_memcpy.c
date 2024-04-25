/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:06:32 by slangero          #+#    #+#             */
/*   Updated: 2024/04/15 15:32:36 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;
	char	*char_dest;
	char	*char_src;

	if (dest == NULL)
		return (NULL);

	char_dest = (char *) dest;
	char_src = (char *) src;

	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (char_dest);
}
	// void pointer becomes a pointer to a character 
	// useful for array notation in while loop
	// return dest or return char_dest?