/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:26:52 by hlaineka          #+#    #+#             */
/*   Updated: 2021/03/20 18:27:19 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns a pointer to the last occurance of character c in src
*/

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == c)
			return ((char*)&src[i]);
		i--;
	}
	return (NULL);
}
