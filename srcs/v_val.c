/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_val.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 19:50:42 by zsmith            #+#    #+#             */
/*   Updated: 2017/03/09 20:06:14 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vect.h"

void	*v_val(size_t index, t_vect *vect)
{
	if (index * vect->data_size > vect->len)
		return (NULL);
	return (vect->a + (index * vect->data_size));
}