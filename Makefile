# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: realdahh <realdahh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 14:33:40 by realdahh          #+#    #+#              #
#    Updated: 2022/10/25 19:19:53 by realdahh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#DECLARED VARIABLES 
NAME= libft.a  
CFILES		= 	ft_atoi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_isalnum.c \
				ft_isalpha.c ft_strchr.c ft_tolower.c ft_isascii.c ft_isdigit.c \
				ft_memchr.c ft_toupper.c ft_isprint.c ft_memcmp.c ft_memmove.c \
				ft_strlcpy.c ft_memset.c ft_strlen.c ft_strlcat.c ft_memcpy.c \
				ft_bzero.c ft_strdup.c  ft_calloc.c ft_substr.c ft_strjoin.c\
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
				ft_putnbr_fd.c
		
OBJECTS= 	$(CFILES:.c=.o)
BONUS		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
				ft_lstiter.c ft_lstnew.c ft_lstsize.c ft_lstlast.c

BONUS_OJS 	=	 $(BONUS:.c=.o)
CFLAGS 		=	-Wall -Wextra -Werror 
CC 			= 	gcc

$(NAME): 	$(OBJECTS)
			ar -rcs $(NAME) $(OBJECTS)
all:		$(NAME) 

	
bonus: 		$(BONUS_OJS)
			ar -rcs $(NAME) $(BONUS_OJS)
		
clean: 
			rm -rf $(OBJECTS) $(BONUS_OJS)
		
fclean:		 clean 
			rm -rf $(NAME)
	
re: clean all 

.PHONY: all clean fclean re
