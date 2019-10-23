# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kpesonen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 15:44:24 by kpesonen          #+#    #+#              #
#    Updated: 2019/10/22 14:23:21 by kpesonen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJS = ./*.o

SRCS = ./*ft_*.c

INCLUDES = ./*.h 

FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)


$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS):
	gcc $(FLAGS) -c $(SRCS) -I $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
