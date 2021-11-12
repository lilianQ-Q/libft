# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 13:52:24 by ldamiens          #+#    #+#              #
#    Updated: 2021/11/11 19:54:02 by ldamiens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=======================#
#		Variables       #
#=======================#

#-------- Output --------#

NAME = libft.a

#-------- Paths --------#

PATH_INCLUDE 	= .
PATH_SOURCE		= .
PATH_OBJECT		= .

#-------- Source --------#

SRC 			= 	ft_strchr.c \
					ft_strdup.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c \
					ft_bzero.c \
					ft_calloc.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_atoi.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_tolower.c \
					ft_toupper.c

#-------- Objet --------#

OBJECT 			= $(addprefix $(PATH_OBJECT)/, $(SRC:.c=.o))

#-------- Include --------#

INCLUDE			= $(addprefix $(PATH_INCLUDE)/, libft.h)

#-------- Macro --------#

CC				= gcc
FLAGS			= -Wall -Wextra -Werror
RM				= rm -rf
LIBC			= ar rc

#=======================#
#		  Target        #
#=======================#

#-------- Regles --------#

all 	:		$(NAME)

$(NAME) :		$(OBJECT)
					$(LIBC) $(NAME) $(OBJECT)

re		:	fclean all

$(PATH_OBJECT)/%.o :	$(PATH_SOURCE)/%.c $(INCLUDE)
					$(CC) $(FLAGS) -O3 -I $(PATH_INCLUDE) -c $< -o $@

#-------- Clean --------#

clean	:
	$(RM) $(OBJECT)

fclean	: clean
	$(RM) $(NAME)

re : fclean all