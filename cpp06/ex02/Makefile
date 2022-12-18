# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/18 21:16:04 by ydahni            #+#    #+#              #
#    Updated: 2022/12/19 00:25:23 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = Identify.cpp main.cpp
Identify = Identify

OBJ = ${SRC:.cpp=.o}

all : Identify
	
$(Identify): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Identify
	@tput setaf 2; echo "Identify Real Type Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Identify

re: fclean all 