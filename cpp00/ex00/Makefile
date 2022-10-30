# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:23:23 by ydahni            #+#    #+#              #
#    Updated: 2022/10/31 00:07:03 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = megaphone.cpp
megaphone = megaphone

OBJ = ${SRC:.cpp=.o}

all : megaphone
	
$(megaphone): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o megaphone
	@tput setaf 2; echo "megaphone Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f megaphone

re: fclean all 