/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:17:05 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/14 17:52:11 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_array(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

int	fcont_size(char const *s, char c)
{
	int	cont;
	int	i;

	i = 0;
	cont = 0;
	while (s[i])
	{
		if (s[i] == c)
			i += 1;
		else
		{
			cont++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (cont);
}

char	**spl_arr(char **str, const char *s, char c)
{
	int	i;
	int	temp;
	int	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			temp = i;
			while (s[i] && s[i] != c)
				i++;
			str[index] = malloc (i - temp + 1);
			if (!str[index])
				return (NULL);
			ft_strlcpy(str[index++], s + temp, i - temp + 1);
		}
	}
	str[index] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;

	if (!s)
		return (NULL);
	count = fcont_size(s, c);
	str = malloc((count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	if (!spl_arr(str, s, c))
	{
		free_array(str);
		return (NULL);
	}
	return (str);
}
