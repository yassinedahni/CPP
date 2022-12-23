# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 00:13:39 by ydahni            #+#    #+#              #
#    Updated: 2022/12/23 00:19:48 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

templates = templates
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp

OBJ = ${SRC:.cpp=.o}

all : templates
	
$(templates): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o templates
	@tput setaf 2; echo "Templates Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f templates

re: fclean all 