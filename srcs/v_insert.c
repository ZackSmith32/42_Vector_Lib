/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_insert.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 15:51:59 by zsmith            #+#    #+#             */
/*   Updated: 2017/03/09 17:42:41 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vect.h"

/*
**	i is the position in the array in data units not bytes
*/

void	v_insert(t_vect *head, size_t i, void *data)
{
	printf("in: insert data_size = %d\n", (int)sizeof(data));
	size_t	index;

	// if (sizeof(data) != head->data_size)
	// 	return ;
	if (head->len == head->cap)
		v_increase(head);
	index = i * sizeof(data);
	printf("dest %d, src %d, len %d\n", (int)(index + sizeof(data)), (int)(index), 
		(int)(head->len - index));
	ft_memmove(head->a + index + sizeof(data), head->a + index, 
		head->len - index);
	ft_memcpy(head->a + index, data, sizeof(data));
	head->len = head->len + sizeof(data);
}