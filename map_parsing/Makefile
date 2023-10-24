# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehida <ehida@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 15:56:29 by ehida             #+#    #+#              #
#    Updated: 2023/10/23 23:40:27 by ehida            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= cub3d

SRCS 	= main.c map_format.c ft_exit.c init_map.c validate_file.c check_line.c \
		check_news.c check_fc.c check_dup.c fill_rgb.c check_if_map.c get_map.c \
		init_myvec.c realloc_vec.c validate_map.c
		
OBJS 	= $(SRCS:%.c=%.o)

CC		= cc

FLAGS 	= -Wextra -Werror -Wall

RM		= /bin/rm -f

LIBFT 	= libft/libft.a

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(LIBFT)

 $(LIBFT):
	make -C libft

$(OBJS): %.o: %.c
	$(CC) $(FLAGS) -c $?

clean:
	$(RM) $(OBJS)
	cd libft && $(MAKE) clean

fclean: clean
	$(RM) $(NAME)
	cd libft && $(MAKE) fclean
	
re: fclean all