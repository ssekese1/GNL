# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssekese <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/06 21:20:51 by ssekese           #+#    #+#              #
#    Updated: 2017/06/21 09:10:14 by ssekese          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 

SRC = *.c

OBJ = *.o

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
		gcc -c $(FLAGS) $(SRC) -I ./
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
