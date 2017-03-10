/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_val.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 19:50:42 by zsmith            #+#    #+#             */
/*   Updated: 2017/03/09 21:12:53 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vect.h"

void	*v_item(size_t index, t_vect *vect)
{
	if (index * vect->data_size > vect->len)
		return (NULL);
	return (vect->a + (index * vect->data_size));
}