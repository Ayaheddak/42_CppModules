# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheddak <aheddak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 14:14:46 by aheddak           #+#    #+#              #
#    Updated: 2022/11/18 17:47:16 by aheddak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	zombie

UTILS	=	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

CC		=	g++

all		:	$(NAME)

$(NAME)	:	$(UTILS)	
	@$(CC) $(FLAGS) $(UTILS) -o $(NAME) -std=c++98

clean :
	@${RM} $(OBJCT)

fclean :	clean
	@${RM} ${NAME}

re : fclean all