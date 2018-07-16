# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/12 16:07:31 by loiberti     #+#   ##    ##    #+#        #
#    Updated: 2018/07/16 13:24:24 by loiberti    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = do_op
SRC = ./srcs/*.c
FlAG = -Wall -Wextra -Werror
OBJET = ./*.o

all: $(NAME)

$(NAME):
	@ gcc $(FLAG) -c -I includes $(SRC)
	@ gcc -o $(NAME) $(OBJET)

clean:
	@ /bin/rm -f $(OBJET)
