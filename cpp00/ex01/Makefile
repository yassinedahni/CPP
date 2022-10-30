# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 17:23:23 by ydahni            #+#    #+#              #
#    Updated: 2022/10/31 00:07:18 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PhoneBook = PhoneBook
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = PhoneBook.cpp Contact.cpp

OBJ = ${SRC:.cpp=.o}

all : PhoneBook
	
$(PhoneBook): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o PhoneBook
	@tput setaf 2; echo "PhoneBook Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f PhoneBook

re: fclean all 