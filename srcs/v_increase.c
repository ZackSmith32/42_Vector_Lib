/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_increase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 16:20:28 by zsmith            #+#    #+#             */
/*   Updated: 2017/03/09 21:37:06 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vect.h"

void	v_increase(t_vect *head)
{
	printf("v: in: increase\n");
	void	*new;

	new = ft_memalloc(head->cap * 2);
	ft_memmove(new, head->a, head->len);
	free(head->a);
	head->a = new;
	head->cap = head->cap * 2;
	printf("v : out: increse\n");
}
