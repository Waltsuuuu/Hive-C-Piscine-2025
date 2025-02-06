# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlundaev <vlundaev@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 18:54:28 by vlundaev          #+#    #+#              #
#    Updated: 2025/02/02 18:59:18 by vlundaev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags

CC			= cc
CFLAGS		= -Wall -Wextra -Werror

# Executable name

NAME		= rush-02

# Source files (automatically finds all .c files)

SRCS		= $(wildcard *.c)
OBJS		= $(SRCS:.c=.o)

# Compilation rule

all: $(NAME)

# Linking executable

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Compiling object files

%.o: %.c my_header.h
	$(CC) $(CFLAGS) -c $< -o $@

# Cleaning object files

clean:
	rm -f $(OBJS)

# Full clean (removes executable too)

fclean: clean
	rm -f $(NAME)

# Recompile everything from scratch

re: fclean all
