# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnaidu <lnaidu@student.42nice.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 11:56:41 by lnaidu            #+#    #+#              #
#    Updated: 2023/01/31 21:20:53 by lnaidu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ./main.c ./move/stack.c ./move/mouvement.c ./move/stack2.c ./move/mouvement2.c ./errors.c ./Algorithm/ft_order.c ./Algorithm/ft_algo.c ./Algorithm/ft_algo100.c ./Algorithm/ft_algo500.c ./array2.c ./array.c

all : ${NAME}

OBJS = ${SRC:.c=.o}

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	make all bonus -C ./Libft
	$(CC) $(OBJS) -o $(NAME) ./Libft/libft.a

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ./push_swap
	make fclean -C ./Libft
	

re : fclean all

.PHONY: .c.o all clean fclean bonus re
