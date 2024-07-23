/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slangero <slangero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:45:42 by slangero          #+#    #+#             */
/*   Updated: 2024/05/05 16:51:37 by slangero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	word_count(const char *str, char sep)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i] != sep && str[i])
			nb++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (nb);
}

void	*ft_free_all(char	**array, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}
/* static void? et return NULL?*/

char	*fill_str(const char *str, char sep, int widx)
{
	int	i;
	int	c;
	int	start;

	i = 0;
	c = 0;
	while (str[i] && c < widx)
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] != sep)
			c++;
		while (str[i] && str[i] != sep)
			i++;
	}
	while (str[i] == sep && str[i])
		i++;
	start = i;
	while (str[i] != sep && str[i])
		i++;
	return (ft_substr(str, start, i - start));
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		x;	
	char	**table;

	if (!s)
		return (NULL);
	table = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!table)
		return (NULL);
	i = 0;
	x = 0;
	while (x < word_count(s, c))
	{
		table[x] = fill_str(s, c, x);
		if (!table[x])
			return (ft_free_all(table, x));
		x++;
	}
	table[x] = NULL;
	return (table);
}

// int	main(int ac, char **av)
// {
// 	char	**strs;

// 	strs = ft_split(av[ac - 2], av[ac - 1][0]);
// 	int	i = 0;
// 	while (strs[i])
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// 	printf("%s\n", strs[i]);
// 	ft_free_all(strs, i);
// 	system("leaks a.out");
// 	return (0);
// }

//table[index] = ft_substr(s, start, end);

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
while parcourt chaque char, 
si char n'est pas sep, 
autre while dans le while qui compte jusau'a sep

ensuite meme fonciton, mais qui stocke chaque char dans 
des que sep, tu passe au prochain dans le array
*/

/*
char	**ft_split(const char *s, char c)
{
	char	**table;
	int		start;
	int		i;
	int		x;

	table = (char**) malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!table)
		return (NULL);
	x = 0;
	start = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			start++;
			i++;
		table[x] = ft_substr(s, start, (i - start));
			x++;
		if (!table[x])
			return (NULL);
		while (s[i] && s[i] != c)
			i++;
	}
	table[x] = NULL;
	return (table);
}

*/