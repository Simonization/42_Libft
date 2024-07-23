/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:54:55 by slangero          #+#    #+#             */
/*   Updated: 2024/05/05 15:09:59 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = 0;
	while (*(s + j))
		j++;
	if ((char)c == 0)
		return ((char *)s + j);
	while (j >= 0)
	{
		if (s[j] == (char)c)
			return ((char *)s + j);
		j--;
	}
	return (NULL);
}

/*
pourquoi return s + j ?
marche aussi avec if c == '\0' , ou (char) c == 0 ??
*/