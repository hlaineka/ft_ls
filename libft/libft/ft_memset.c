/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:13:24 by hlaineka          #+#    #+#             */
/*   Updated: 2021/03/20 18:24:21 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** sets num amount of bytes of ptr to value.
*/

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*temp;

	temp = ptr;
	while (num > 0)
	{
		temp[num - 1] = value;
		num--;
	}
	return (ptr);
}
