/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:24:08 by slangero          #+#    #+#             */
/*   Updated: 2024/05/05 17:03:44 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dupstr;
	int		len;
	int		i;

	len = 0;
	while (s[len])
		len++;
	dupstr = malloc(sizeof(char) * (len + 1));
	if (!dupstr)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		dupstr[i] = s[i];
		i++;
	}
	dupstr[i] = '\0';
	return (dupstr);
}

/*
difference entre ecrire dupstr = char* ;alloc et (char*dupstr = malloc)
pour proteger maloc, si tu return dupstr, ca envoie un null pointer?
*/