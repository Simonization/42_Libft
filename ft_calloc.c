/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:27:14 by slangero          #+#    #+#             */
/*   Updated: 2024/05/05 16:37:45 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	if (size != 0 && (total_size / size) != count)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
be aware of potential overflow when calculating `total_size`. 
If `count * size` is too large, 
it could overflow 
and result in less memory being allocated than expected. 
This could lead to bugs and security issues. 
*/
/*
pourrait marcher comme ca?
if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
*/