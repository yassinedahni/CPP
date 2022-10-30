# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:23:23 by ydahni            #+#    #+#              #
#    Updated: 2022/10/31 00:03:43 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

harlFilter = harlFilter
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Harl.cpp

OBJ = ${SRC:.cpp=.o}

all : harlFilter
	
$(harlFilter): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o harlFilter
	@tput setaf 2; echo "Harl Filter Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f harlFilter

re: fclean all 