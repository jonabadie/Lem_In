/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 21:29:25 by jabadie           #+#    #+#             */
/*   Updated: 2015/07/28 21:35:04 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

t_map	*parser(void)
{
	int		ret;
	char	buf[BUFF_SZ + 1];

	while ((ret = read(9, buf, BUFF_SZ)) > 0)
	{

	}
	return ();
}