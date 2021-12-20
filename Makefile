# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rzaccari <rzaccari@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 20:10:32 by imorina           #+#    #+#              #
#    Updated: 2021/12/20 11:14:44 by rzaccari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifndef BUFFER_SIZE
	BUFFER_SIZE = 256
endif

ROOT_DIR	?= $(shell pwd)
SRC_DIR		= ${ROOT_DIR}/srcs/
LINKED_LIST_DIR	= ${SRC_DIR}linked-list/
HEADER_DIR 	= ${ROOT_DIR}/includes/
SRC		= $(addprefix ${SRC_DIR}, ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c)
			 
OBJ			= $(SRC:.c=.o);
CC 			= gcc
AR 			= ar rc
NAME 		= libft.a
NORM_BIN	= norminette
NORM_FLAGS	= -RCheckForbiddenSourceHeader -RCheckDefine
RM			= rm -f
NORM_BIN	= norminette
NORM_FLAGS	= -RCheckForbiddenSourceHeader -RCheckDefine
CFLAGS		= -Wall -Wextra -Werror -I${HEADER_DIR} -D BUFFER_SIZE=${BUFFER_SIZE}

.PHONY: 	all clean fclean re

all:		${NAME} ll

${NAME}:	${OBJ}
		${AR} ${NAME} ${OBJ}

ll:		${NAME} ${LINKED_LIST_OBJ}
		${AR} ${NAME} ${LINKED_LIST_OBJ}

clean:
		${RM} ${OBJ}
		${RM} ${LINKED_LIST_OBJ}

fclean: 	clean
		${RM} ${NAME}

re:		fclean ${NAME} ll

lint:		fclean
		${NORM_BIN} ${NORM_FLAGS}

norm:		re
		echo "\n\n"
		${NORM_BIN} ${NORM_FLAGS} ${SRC} ${LINKED_LIST_SRC}