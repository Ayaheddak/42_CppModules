NAME	=	base

UTILS	=	main.cpp

FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

CC		=	g++

OBJS 	= ${UTILS:.cpp=.o} -std=c++98

all		:	$(NAME)

$(NAME)	:	$(UTILS)	
	@$(CC) $(FLAGS) $(UTILS) -o $(NAME)

clean :
	@${RM} $(OBJCT)

fclean :	clean
	@${RM} ${NAME}

re : fclean all