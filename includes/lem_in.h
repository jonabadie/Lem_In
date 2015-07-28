/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabadie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 21:10:59 by jabadie           #+#    #+#             */
/*   Updated: 2015/07/28 21:35:05 by jabadie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

# define BUFF_SZ 2048

typedef struct	s_node
{
	int 			index;
	int				x;
	int				y;
	struct s_node	*link;
}				t_node;

typedef struct s_map
{
	t_node	*start;
	t_node	*end;
	t_node	*all_node;
	int		nb_node;
}				t_map;

#endif
