/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:22:06 by hlaineka          #+#    #+#             */
/*   Updated: 2021/03/20 18:53:11 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** compares up to num characters of str2 to str1. Returns 0 if strings are
** aqual or an integer representing the difference.
*/

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	int		i;
	int		temp_num;

	temp_num = num;
	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && str1[i] != str2[i]
			&& temp_num >= 0)
	{
		i++;
		temp_num--;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
