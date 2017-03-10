/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_new.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 15:34:25 by zsmith            #+#    #+#             */
/*   Updated: 2017/03/09 17:10:00 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vect.h"

t_vect		*v_new(size_t len, size_t data_size)
{
	t_vect	*new;
	size_t	cap;
	size_t	total;

	printf("new: data_size = %d\n", (int)data_size);
	new = (t_vect *)ft_memalloc(sizeof(t_vect));
	total = data_size * len;
	cap = data_size;
	while (cap < total)
		cap = cap * 2;
	new->cap = cap;
	new->len = len;
	new->data_size = data_size;
	new->a = (void *)ft_memalloc(cap);
	return (new);
}