# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rwrobles <rwrobles@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/17 17:00:16 by rwrobles          #+#    #+#              #
#    Updated: 2024/11/17 18:50:29 by rwrobles         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

GREEN		= \033[0;32m
GREY		= \033[0;90m
RED			= \033[0;31m
RESET		= \033[0m

CC 			= clang

FLAGS 		= -Wall -Werror -Wextra

REMOVE 		= rm -f

INCLUDE		= -I .

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
			ft_count_occurrences.c \
			ft_free_ptr.c		\
			ft_free_str_array.c

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

all:		$(NAME)

$(NAME): 	$(OBJS)
			@ar -rcs $(NAME) $(OBJS) 
			@echo "$(GREY)Libft: $(GREEN)$(NAME) was created$(RESET)"

bonus:		$(OBJS) $(BONUS_OBJS)
			@ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)
			@echo "$(GREY)Libft: $(GREEN)$(NAME) was created with Bonus$(RESET)"

%.o: %.c libft.h
			@$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@ 

clean:
			@$(REMOVE) $(OBJS) $(BONUS_OBJS) 
			@echo "$(GREY)Libft: object files were deleted$(RESET)"

fclean:		clean
			@$(REMOVE) $(NAME)
			@echo "$(GREY)Libft: $(NAME) was deleted$(RESET)"

re:			fclean $(NAME)

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
