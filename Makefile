# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmassa-r <mmassa-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 14:02:27 by mmassa-r          #+#    #+#              #
#    Updated: 2023/09/12 14:02:28 by mmassa-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo
CC = cc
CFLAGS = -Werror -Wextra -Wall -pthread -fsanitize=thread
SRC = philo.c the_beginning.c action.c action2.c utils.c utils2.c


OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) 
		$(CC) -g $(CFLAGS) $(OBJ) -o philo

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
