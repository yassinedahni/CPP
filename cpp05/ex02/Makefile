# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ydahni <ydahni@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/03 15:44:35 by ydahni            #+#    #+#              #
#    Updated: 2022/12/08 23:35:04 by ydahni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

bureaucrat = bureaucrat
CPPFLAGS = -Wextra -Wall -Werror -std=c++98
CC = c++
SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ = ${SRC:.cpp=.o}

all : bureaucrat
	
$(bureaucrat): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o bureaucrat
	@tput setaf 2; echo "bureaucrat Is Ready"

clean :
	@rm -f $(OBJ)
	@tput setaf 1; echo "Clean Complet"

fclean : clean
	@rm -f bureaucrat

re: fclean all 