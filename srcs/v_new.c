/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_new.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 15:34:25 by zsmith            #+#    #+#             */
/*   Updated: 2017/03/13 23:05:13 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vect.h"

/*
**	units is the number of items in the vector
*/

t_vect		*v_new(size_t units, size_t data_size)
{
	t_vect	*new;
	size_t	cap;
	size_t	total;

	new = (t_vect *)ft_memalloc(sizeof(t_vect));
	total = units * data_size;
	cap = data_size;
	while (cap < total)
		cap = cap * 2;

	new->cap = cap;
	new->len = units * data_size;
	new->units = units;
	new->data_size = data_size;
	new->a = (void *)ft_memalloc(cap);
	return (new);
}