# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zsmith <zsmith@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/22 16:32:25 by zsmith            #+#    #+#              #
#    Updated: 2017/03/09 21:14:08 by zsmith           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libvect.a
FLAGS	=	-Wall -Wextra -Werror -c
CFILES	=	v_new.c			\
			v_insert.c		\
			v_increase.c	\
			v_item.c		\
			
			
SRCDIR	=	srcs/
OFILES	=	$(CFILES:.c=.o)

.PHONY: all $(NAME) main complib clean flcean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(addprefix $(SRCDIR), $(CFILES))
	ar rc $(NAME) $(OFILES)
	/bin/rm -f $(OFILES)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all