/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:45:16 by slangero          #+#    #+#             */
/*   Updated: 2024/04/25 11:16:28 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));

	substr = (char *)malloc(sizeof(char) * (len + 1))
	if (!substr)
		return (NULL);

	i = 0;
	while (i < len && s[start])
		substr[i++] = s[start++];
	substr[i] = '\0';

	return (substr);
}
/*
pourquoi pas arguments(void	*s, void	*start, size_t len)
tu peux aussi ecrire	if (s == NULL)
ok de mettre i++ dans le dernier while?
pourquoi while on ne peut pas juste mettre tant que i<len?
on peut ecrire directement ? 
if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
il ne faut pas cast le malloc?
        return NULL;
*/