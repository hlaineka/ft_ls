/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:19:55 by hlaineka          #+#    #+#             */
/*   Updated: 2021/03/20 18:50:19 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** searches num bytes on ptr to find c (interpreted as unsigned int)
** When c is found, returns a pointer to it.
** this does not work either... or at least leaks
*/

void	*ft_memchr(const void *ptr, int c, size_t num)
{
	unsigned int		i;
	const unsigned char	*temp_ptr;
	unsigned char		temp_c;

	temp_ptr = ptr;
	temp_c = c;
	i = 0;
	while (i < num)
	{
		if (temp_ptr[i] == temp_c)
			return ((void*)&temp_ptr[i]);
		i++;
	}
	return (NULL);
}
