# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 17:00:16 by rwrobles          #+#    #+#              #
#    Updated: 2024/11/20 16:48:45 by rwrobles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME		= libft.a

# Colors for feedback
GREEN		= \033[0;32m
GREY		= \033[0;90m
RED			= \033[0;31m
RESET		= \033[0m

# Compiler and flags
CC 			= clang
FLAGS 		= -Wall -Werror -Wextra -g
REMOVE 		= rm -f

# Include directory
INCLUDE		= -I .

# Source files
SRCS 		= ft_isalpha.c 		\
			ft_isdigit.c 		\
			ft_isalnum.c 		\
			ft_isascii.c 		\
			ft_isprint.c 		\
			ft_strlen.c 		\
			ft_memset.c 		\
			ft_bzero.c 		\
			ft_memcpy.c 		\
			ft_memmove.c 		\
			ft_strlcpy.c 		\
			ft_strlcat.c 		\
			ft_toupper.c 		\
			ft_tolower.c 		\
			ft_strchr.c 		\
			ft_strrchr.c 		\
			ft_strncmp.c		\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strnstr.c		\
			ft_atoi.c 		\
			ft_strdup.c 		\
			ft_calloc.c 		\
			ft_itoa.c 		\
			ft_substr.c	 	\
			ft_split.c 		\
			ft_strjoin.c 		\
			ft_strtrim.c		\
			ft_strmapi.c 		\
			ft_striteri.c 	\
			ft_putstr_fd.c 	\
			ft_putchar_fd.c 	\
			ft_putendl_fd.c 	\
			ft_putnbr_fd.c	\
			ft_free_ptr.c

BONUS_SRCS  = ft_lstnew.c			\
			ft_lstadd_front.c		\
			ft_lstsize.c			\
			ft_lstlast.c			\
			ft_lstadd_back.c		\
			ft_lstdelone.c		\
			ft_lstclear.c			\
			ft_lstiter.c			\
			ft_lstmap.c

OBJS 		= $(SRCS:.c=.o)
BONUS_OBJS 	= $(BONUS_SRCS:.c=.o)

# Rules for building the library
all:		$(NAME)

$(NAME): 	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)
			@echo "$(GREY)Libft: $(GREEN)$(NAME) was created$(RESET)"

bonus:		$(OBJS) $(BONUS_OBJS)
			@ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)
			@echo "$(GREY)Libft: $(GREEN)$(NAME) was created with Bonus$(RESET)"

%.o: %.c libft.h
			@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@ 

# Test rules
main:		$(NAME)
			@$(CC) $(FLAGS) -o main main.c $(NAME) $(INCLUDE)
			@echo "$(GREY)Main: $(GREEN)main executable was created$(RESET)"

main_bonus: bonus
	$(CC) $(FLAGS) -o main_bonus main_bonus.c $(NAME) $(INCLUDE)

# Clean rules
clean:
			@$(REMOVE) $(OBJS) $(BONUS_OBJS)
			@echo "$(GREY)Libft: object files were deleted$(RESET)"

fclean:		clean
			@$(REMOVE) $(NAME) main main_bonus
			@echo "$(GREY)Libft: $(NAME) and test executables were deleted$(RESET)"

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus main main_bonus
