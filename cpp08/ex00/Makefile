# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 15:32:59 by ydahni            #+#    #+#              #
#    Updated: 2022/12/27 15:34:19 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find = find
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

all : find
	
$(find): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o find
	@tput setaf 2; echo " Easy find Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f find

re: fclean all 