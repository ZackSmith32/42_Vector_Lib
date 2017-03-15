/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 16:32:54 by zsmith            #+#    #+#             */
/*   Updated: 2017/03/13 21:55:20 by zsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vect.h"
#include <stdio.h>

int		main(void)
{
	t_vect	*test;
	t_list	**items;
	t_list	*lst;
	int		i;

	test = v_new(0, sizeof(t_list*));
	v_insert(test, 0, ft_lstnew("abcd", 5));
	v_insert(test, 0, ft_lstnew("efgh", 5));
	v_insert(test, 0, ft_lstnew("ijkl", 5));
	v_insert(test, 0, ft_lstnew("mnop", 5));
	v_insert(test, 0, ft_lstnew("qrst", 5));
	v_insert(test, 0, ft_lstnew("uvwx", 5));
	v_insert(test, 0, ft_lstnew("yz12", 5));
	v_insert(test, 3, ft_lstnew("0123", 5));
	v_remove(test, 5);


	items = (test->a);
	i = 0;
	printf("len = %d\n", (int)test->len);
	printf("cap = %d\n", (int)test->cap);
	printf("data_size = %d\n", (int)test->data_size);
	printf("sizeof *items = %d\n", (int)sizeof(items));
	printf("sizeof t_list = %d\n", (int)sizeof(t_list));
	while (i <= (int)test->len / test->data_size)
	{
		printf("result = %s\n", ((t_list *)v_item(i, test))->content);
		// items++;
		i++;
	}
	return (0);
}


/*
gcc lemd.c -o main -I ../includes/vect.h -L. ../libdir/libft.a ../libvect.a
*/
