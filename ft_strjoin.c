/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:48:42 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/02 20:35:09 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	char	*rslt;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	rslt = malloc(lens1 + lens2 + 1);
	if (!rslt)
		return (NULL);
	ft_memcpy (rslt, s1, lens1);
	ft_memcpy (rslt + lens1, s2, lens2 + 1);
	rslt[lens1 + lens2] = '\0';
	return (rslt);
}
