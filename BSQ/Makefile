# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/21 13:36:42 by loiberti     #+#   ##    ##    #+#        #
#    Updated: 2018/07/25 22:24:39 by kabouama    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = bsq

SRC = srcs/*.c

FLAG = -Wall -Werror -Wextra

OBJ = *.o

HEAD = ./includes

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -I $(HEAD)

$(OBJ):
	gcc -c $(FLAG) $(SRC) -I$(HEAD)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
