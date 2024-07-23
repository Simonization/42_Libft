/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:54:07 by slangero          #+#    #+#             */
/*   Updated: 2024/05/05 16:56:46 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	lendest = ft_strlen(dest);
	if (size <= lendest)
		return (size + lensrc);
	while (lendest + i < size - 1 && src[i])
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[lendest + i] = '\0';
	return (lendest + lensrc);
}
/*
The strlcat() function always returns the length of the string 
it tried to create, 
this is the original length of dst 
plus the original length of src, 
even if you have to truncate the string to NUL-terminate it.
*/