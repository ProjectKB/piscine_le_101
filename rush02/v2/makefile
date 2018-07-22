# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/21 13:36:42 by loiberti     #+#   ##    ##    #+#        #
#    Updated: 2018/07/22 14:00:51 by loiberti    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = colle-2

SRC = ./srcs/ft_utilitary.c ./srcs/ft_verif_2.c ./srcs/list.c ./srcs/main.c \
	./srcs/verif_rush.c ./srcs/ft_match.c ./srcs/ft_display.c \
	./srcs/ft_particular_case.c

FLAG = -Wall -Werror -Wextra

OBJ = ./ft_utilitary.o ./ft_verif_2.o ./list.o ./main.o \
	./verif_rush.o ./ft_match.o ./ft_display.o ./ft_particular_case.o

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
