# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 13:52:24 by ldamiens          #+#    #+#              #
#    Updated: 2021/11/23 14:42:41 by ldamiens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=======================#
#		Variables       #
#=======================#

#-------- Output --------#

NAME = libft.a

#-------- Paths --------#

PATH_INCLUDE 		= includes
PATH_SOURCE			= srcs
PATH_SOURCE_BONUS 	= srcs
PATH_OBJECT			= objs
PATH_OBJECT_BONUS 	= objs

#-------- Source --------#

SRC 			= 	string/ft_strchr.c \
					string/ft_strdup.c \
					string/ft_strjoin.c \
					string/ft_strlcat.c \
					string/ft_strlcpy.c \
					string/ft_strlen.c \
					string/ft_strmapi.c \
					string/ft_striteri.c \
					string/ft_strncmp.c \
					string/ft_strnstr.c \
					string/ft_strrchr.c \
					string/ft_strtrim.c \
					string/ft_substr.c \
					string/ft_bzero.c \
					memory/ft_calloc.c \
					memory/ft_memchr.c \
					memory/ft_memcmp.c \
					memory/ft_memcpy.c \
					memory/ft_memccpy.c \
					memory/ft_memmove.c \
					memory/ft_memset.c \
					int/ft_atoi.c \
					string/ft_itoa.c \
					char/ft_isalnum.c \
					char/ft_isalpha.c \
					char/ft_isascii.c \
					char/ft_isdigit.c \
					char/ft_isprint.c \
					string/ft_split.c \
					char/ft_tolower.c \
					char/ft_toupper.c \
					print/ft_putchar_fd.c \
					print/ft_putstr_fd.c \
					print/ft_putendl_fd.c \
					print/ft_putnbr_fd.c

SRC_BONUS		=	list/ft_lstnew.c \
					list/ft_lstadd_front.c \
					list/ft_lstsize.c \
					list/ft_lstlast.c \
					list/ft_lstadd_back.c \
					list/ft_lstdelone.c \
					list/ft_lstclear.c \
					list/ft_lstiter.c \
					list/ft_lstmap.c

#-------- Objet --------#

OBJECT 			= $(addprefix $(PATH_OBJECT)/, $(SRC:.c=.o))
OBJECT_BONUS	= $(addprefix $(PATH_OBJECT_BONUS)/, $(SRC_BONUS:.c=.o))

#-------- Include --------#

INCLUDE			= $(addprefix $(PATH_INCLUDE)/, libft.h)

#-------- Macro --------#

CC				= gcc
FLAGS			= -Wall -Wextra -Werror
RM				= rm -rf
LIBC			= ar rc
MAKEFILE		= Makefile

#=======================#
#		  Target        #
#=======================#

#-------- Regles --------#

all 	:		$(NAME)

$(NAME) :		$(OBJECT)
					$(LIBC) $(NAME) $(OBJECT)

bonus :			$(OBJECT) $(OBJECT_BONUS)
					$(LIBC) $(NAME) $(OBJECT) $(OBJECT_BONUS)

$(PATH_OBJECT)/%.o :	$(PATH_SOURCE)/%.c $(INCLUDE) $(MAKEFILE)
					$(CC) $(FLAGS) -I $(PATH_INCLUDE) -c $< -o $@

$(PATH_OBJECT_BONUS)/%.o : $(PATH_SOURCE_BONUS)/%.c	$(INCLUDE) $(MAKEFILE)
					$(CC) $(FLAGS) -I $(PATH_INCLUDE) -c $< -o $@

#-------- Clean --------#

clean	:
	$(RM) $(OBJECT) $(OBJECT_BONUS)

fclean	: clean
	$(RM) $(NAME)

re : fclean all

.PHONY	:		all bonus clean fclean re