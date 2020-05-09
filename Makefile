# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awerebea <awerebea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/30 21:56:47 by awerebea          #+#    #+#              #
#    Updated: 2020/05/07 16:55:58 by awerebea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      = libft.a
CC        = gcc
CFLAGS    = -Wall -Wextra -Werror
HEADER    = libft.h
SRCDIR    = .
OBJDIR    = ./obj
OBJ       = $(addprefix $(OBJDIR)/, $(SRC:%.c=%.o))
OBJ_BONUS = $(addprefix $(OBJDIR)/, $(SRC_BONUS:%.c=%.o))
SRC       = $(addprefix $(SRCDIR)/, ft_atoi.c ft_bzero.c ft_calloc.c \
			ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
			ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c \
			ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
			ft_toupper.c ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strjoin.c ft_strmapi.c \
			ft_strtrim.c ft_substr.c)
SRC_BONUS = $(addprefix $(SRCDIR)/, ft_lstadd_back.c ft_lstadd_front.c \
			ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
			ft_lstnew.c ft_lstsize.c)

.PHONY: all clean fclean bonus

all: $(NAME)

$(NAME):   $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

bonus:     $(OBJ) $(OBJ_BONUS) $(HEADER)
	ar rcs $(NAME) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p  $(OBJDIR)
	$(CC)  -c  $(CFLAGS) $^ -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
