NAME = worstPhonebookever

SRCS = phonebook.cpp contact.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

CC = clang++

FLAGS = -Wall -Werror -Wextra -std=++98

RM = rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
							$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
							$(RM) $(OBJS)

fclean:			clean
							$(RM) $(NAME)

re:				fclean all

.PHONY: clean fclean all re
