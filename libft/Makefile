# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/19 16:02:45 by aalikhan          #+#    #+#              #
#    Updated: 2019/09/19 21:26:48 by aalikhan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -c -I

SRCS = *.c

HEADERS = libft.h

OBJECTS = *.o

all: $(NAME)

$(NAME):

	@gcc $(FLAGS) $(HEADERS) $(SRCS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)	

fclean: clean
	@rm -f $(NAME)

re: fclean all