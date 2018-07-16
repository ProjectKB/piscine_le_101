# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: loiberti <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/12 16:07:31 by loiberti     #+#   ##    ##    #+#        #
#    Updated: 2018/07/16 17:18:27 by loiberti    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = do_op
SRC = ./srcs/*.c
FlAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@ gcc $(FLAG) -I includes $(SRC) -o $(NAME)

clean:
	@ /bin/rm -f $(NAME)
