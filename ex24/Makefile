# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pehenri2 <pehenri2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 18:24:34 by pehenri2          #+#    #+#              #
#    Updated: 2023/07/14 17:23:03 by pehenri2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS_DIR = srcs/
HEADERS_DIR = includes/
FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS = $(addprefix $(SRCS_DIR), $(FILES))
OBJ = $(patsubst $(SRCS_DIR)%.c, ./%.o, $(SRCS))
FLAGS = -c -Wall -Werror -Wextra

$(NAME): $(SRCS)
	gcc $(FLAGS) $(SRCS) -I $(HEADERS_DIR)
	ar -rcs $(NAME) $(OBJ)
	
clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all