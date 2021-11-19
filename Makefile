# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldamiens <ldamiens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 13:52:24 by ldamiens          #+#    #+#              #
#    Updated: 2021/11/19 12:54:19 by ldamiens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#=======================#
#		Variables       #
#=======================#

#-------- Output --------#

NAME = libft.a

#-------- Paths --------#

PATH_INCLUDE 		= .
PATH_SOURCE			= .
PATH_SOURCE_BONUS 	= .
PATH_OBJECT			= .
PATH_OBJECT_BONUS 	= .

#-------- Source --------#

SRC 			= 	ft_strchr.c \
					ft_strdup.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_striteri.c \
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
					ft_itoa.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_split.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c

SRC_BONUS		=	ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c

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

re		:	fclean all

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
