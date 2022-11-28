NAME	=	FragTrap

UTILS	=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

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