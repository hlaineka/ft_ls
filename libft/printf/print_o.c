/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_o.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helvi <helvi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 12:24:15 by hlaineka          #+#    #+#             */
/*   Updated: 2021/03/20 18:54:04 by helvi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char	*octal_width(char *string, int width, t_tags *command)
{
	char	*returnable;

	if ((int)ft_strlen(string) < width)
	{
		if (command->flag_zero && !command->flag_minus
				&& command->precision == -1)
			returnable = ft_strset('0', width);
		else
			returnable = ft_strset(' ', width);
		if (command->flag_minus)
			ft_strpaste(returnable, string);
		else
			ft_strpaste(&returnable[width - ft_strlen(string)], string);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return (returnable);
}

static char	*octal_precision(char *string, t_tags *command)
{
	char	*returnable;

	if (ft_strequ(string, "0") && command->precision == 0)
		returnable = ft_strnew(0);
	else if ((int)ft_strlen(string) <= command->precision)
	{
		returnable = ft_strset('0', command->precision);
		ft_strpaste(&returnable[ft_strlen(returnable)
				- ft_strlen(string)], string);
	}
	else
		returnable = ft_strdup(string);
	free(string);
	return (returnable);
}

static char	*octal_hash(char *string, t_tags *command)
{
	char	*returnable;

	if (string[0] == '\0' || (string[0] == '0' && string[1] == '\0'))
		returnable = ft_strdup("0");
	else if (command->flag_zero && command->width != -1)
	{
		returnable = octal_width(string, command->width - 2, command);
		returnable = ft_strjoin("0", returnable);
		return (returnable);
	}
	else if (command->precision != -1 && string[0] == '0')
		returnable = ft_strdup(string);
	else
		returnable = ft_strjoin("0", string);
	free(string);
	return (returnable);
}

static char	*octal_editor(char *printable, t_tags *command)
{
	if (command->precision != -1)
		printable = octal_precision(printable, command);
	if (command->flag_hash)
		printable = octal_hash(printable, command);
	if (command->width != -1)
		printable = octal_width(printable, command->width, command);
	return (printable);
}

int			print_o(t_tags *command, va_list *source)
{
	uintmax_t	octal;
	char		*printable;
	int			returnable;

	octal = read_octal(command, source);
	printable = ft_itoa_uint(octal, 8);
	printable = octal_editor(printable, command);
	ft_putstr(printable);
	returnable = ft_strlen(printable);
	free(printable);
	return (returnable);
}
