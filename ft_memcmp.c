/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:37:07 by slangero          #+#    #+#             */
/*   Updated: 2024/04/15 15:37:09 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*verif;
	char	*original;
	size_t	i;

	i = 0;
	verif = (char *) s2;
	original = (char *) s1;
	while (i < n)
	{
		if (original[i] != verif[i])
			return ((unsigned char)original[i] - (unsigned char)verif[i]);
		i++;
	}
	return (0);
}