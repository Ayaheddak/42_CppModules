# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 15:40:23 by aheddak           #+#    #+#              #
#    Updated: 2022/11/12 18:42:50 by aheddak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phone

UTILS	=	main.cpp phonebook.cpp contact.cpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

RM		=	rm -f

CC		=	g++

all		:	$(NAME)

$(NAME)	:	$(UTILS)	
	@$(CC) $(FLAGS) $(UTILS) -o $(NAME)

clean :
	@${RM} $(OBJCT)

fclean :	clean
	@${RM} ${NAME}

re : fclean all