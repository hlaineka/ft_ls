/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:25:55 by hlaineka          #+#    #+#             */
/*   Updated: 2021/03/20 18:48:56 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** copies no more than n bytes from memory src to dest, stopping when
** char c is found
** well this obviously does not work?!?
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*temp_dest;
	const unsigned char		*temp_src;
	unsigned int			i;
	unsigned char			temp_c;

	temp_c = c;
	temp_dest = dest;
	temp_src = src;
	i = 0;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		if (temp_src[i] == temp_c)
			return (dest);
		i++;
	}
	return (NULL);
}
