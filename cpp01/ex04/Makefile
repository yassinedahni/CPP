# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:23:23 by ydahni            #+#    #+#              #
#    Updated: 2022/10/31 00:03:32 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

replace = replace
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp
OBJ = ${SRC:.cpp=.o}


all : replace
	
$(replace): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o replace
	@tput setaf 2; echo "Sed Is For Losers Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f replace

re: fclean all 