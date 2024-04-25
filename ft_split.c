/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:45:42 by slangero          #+#    #+#             */
/*   Updated: 2024/04/25 11:18:48 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int word_count(char *str, char sep)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while str[i]
	{
		while(str[i] == sep)
			i++;
		if (str[i] != sep && str[i])
			nb++;
		while (str[i] != sep)
			i++;
	}
	return (nb);
}

char	**ft_split(const char *s, char c)
{
	char	**table;
	int		start;
	int		end;
	int		index;

	table = (char**) malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!table)
		return (NULL);
	index = 0;
	start = 0;
	end = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			end++;
		table[index] = ft_substr(s, start, end);
		if (!table[index])
			return (NULL);
		start++;
		s += end;
	}
	words[start] = NULL;
	return (words);
}
int	main(void)
{
	char	s[] = "    To be, or not to be, that is the question.";

	return (0);
}
/*
loop that continues until it has iterated through each character in s
another loop to find each word in s. 
It does this by checking for characters 
that are not equal to c (the delimiter). 
When it finds a character that is not c, 
it increments end 
until it either finds a character that is c or reaches the end of s.
*/

/*
poru compter les groupes de mots:
char n'est pas sep ou \0, mais celui d'apres oui, 
avec ca malloc le tableau

ensuite, combien de char dans chaque groupe de mots
foncitno
while parcourt chaque char, si char n'est pas sep, autre while dans le while qui compte jusau'a sep

ensuite meme fonciton, mais qui stocke chaque char dans 
des que sep, tu passe au prochain dans le array
*/