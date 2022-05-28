# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youngpar <youngseo321@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 20:34:24 by youngpar          #+#    #+#              #
#    Updated: 2022/05/28 21:40:55 by youngpar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= minirt
CC			= arch -x86_64 cc
CFLAGS		= -Wall -Wextra -Werror
GRAPHIC		= -framework OpenGL -framework Appkit

SRCDIR		= ./src
INCDIR		= ./inc
MLX			= mlx

SRCS		= $(addprefix $(SRCDIR)/, main.c)

SRCS		+= $(addprefix $(SRCDIR)/, \
			   $(addprefix windows/, \
			   window.c \
			   ))

OBJS		= $(SRCS:.c=.o)

.c.o	:
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -I $(INCDIR) -L. -l$(MLX) $(GRAPHIC) -o $(NAME)

clean	:
	@rm -rf $(OBJS)

fclean	: clean
	@rm -rf $(NAME)

re		: fclean all

.PHONY	: all fclean clean re
