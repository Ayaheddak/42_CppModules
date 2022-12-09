NAME	=	bureaucrat

UTILS	=	Bureaucrat.cpp main.cpp Form.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp\
			PresidentialPardonForm.cpp

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