# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slahrach <slahrach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 14:14:46 by aheddak           #+#    #+#              #
#    Updated: 2022/11/28 19:23:13 by slahrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	=	zombie

UTILS	=	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

CC		=	c++

all		:	$(NAME)

$(NAME)	:	$(UTILS)	
	@$(CC) $(FLAGS) $(UTILS) -o $(NAME) -std=c++98

clean :
	@${RM} $(OBJCT)

fclean :	clean
	@${RM} ${NAME}

re : fclean all