/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <hlaineka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 10:29:34 by hlaineka          #+#    #+#             */
/*   Updated: 2020/09/29 10:30:34 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
** returns a pointer to the last occurance of c in src
*/

char	*ft_strnchr(const char *src, int c)
{
	int		i;
	char	temp_c;

	i = ft_strlen(src) - 1;
	temp_c = c;
	if (src)
	{
		while (i >= 0)
		{
			if (src[i] == c)
				return (char*)&src[i];
			i--;
		}
		if (src[i] == c)
			return (char*)&src[i];
	}
	return (NULL);
}
