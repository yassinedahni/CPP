# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 23:47:25 by ydahni            #+#    #+#              #
#    Updated: 2022/12/16 23:48:35 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = Conversion.cpp main.cpp
conversion = conversion

OBJ = ${SRC:.cpp=.o}

all : conversion
	
$(conversion): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o conversion
	@tput setaf 2; echo "conversion Of Scalar Types Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f conversion

re: fclean all 