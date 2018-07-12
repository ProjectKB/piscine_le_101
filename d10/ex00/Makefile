# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/12 16:07:31 by loiberti     #+#   ##    ##    #+#        #
#    Updated: 2018/07/12 16:53:39 by loiberti    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/*.c
OBJECTS = gcc -c $(SRC)

all: $(NAME)

$(NAME):
	@ gcc -c -I includes $(SRC)
	@ ar rc $(NAME) *.o

clean:
	@ /bin/rm -f *.o

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all
