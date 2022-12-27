# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/27 15:32:59 by ydahni            #+#    #+#              #
#    Updated: 2022/12/27 16:33:51 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Span = Span
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Span.cpp

OBJ = ${SRC:.cpp=.o}

all : Span
	
$(Span): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o Span
	@tput setaf 2; echo "Span Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f Span

re: fclean all 