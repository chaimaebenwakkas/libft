/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cben-wak <cben-wak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 19:24:12 by cben-wak          #+#    #+#             */
/*   Updated: 2021/12/02 20:18:02 by cben-wak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*src1;
	char	*src2;

	src1 = (char *)s1;
	src2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (((unsigned char *)src1)[i] - ((unsigned char *)src2)[i]);
		i++;
	}
	return (0);
}
