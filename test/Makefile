# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/21 13:36:42 by loiberti     #+#   ##    ##    #+#        #
#    Updated: 2018/07/21 17:59:53 by loiberti    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = colle-2

SRC = ./srcs/main.c ./srcs/ft_utilitary.c ./srcs/list.c

FLAG = -Wall -Werror -Wextra

OBJ = ./main.o ./ft_utilitary.o ./list.o

all: $(NAME)

$(NAME): $(OBJ) C00 C01 C02 C03 C04
	@ gcc -o $(NAME) $(OBJ)

$(OBJ):
	@ gcc -c $(FLAG) $(SRC)

C00:
	@ gcc -o colle-00 srcs/colle-00.c

C01:
	@ gcc -o colle-01 srcs/colle-01.c

C02:
	@ gcc -o colle-02 srcs/colle-02.c

C03:
	@ gcc -o colle-03 srcs/colle-03.c

C04:
	@ gcc -o colle-04 srcs/colle-04.c

clean:
	@ rm -f *.o

fclean: clean
	@ rm -f colle*

re: fclean all
