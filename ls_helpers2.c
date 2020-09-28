/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_helpers2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlaineka <hlaineka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 18:53:40 by hlaineka          #+#    #+#             */
/*   Updated: 2020/09/25 19:04:24 by hlaineka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_ls.h"

char			*search_path(char *directory_name)
{
	char	*returnable;
	char	*temp_str;
	int		i;
	int		w;

	if (!directory_name)
		return NULL;
	returnable = NULL;
	if (ft_strlast(directory_name) == '/')
		temp_str = ft_strsub(directory_name, 0, ft_strlen(directory_name) - 1);
	else
		temp_str = ft_strdup(directory_name);
	i = 0;
	w = 0;
	while (temp_str[i])
	{
		if (temp_str[i] == '/')
			w = i;
		i++;
	}
	if (w)
		returnable = ft_strsub(temp_str, 0, w + 1);
	free(temp_str);
	return(returnable);
}