# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 17:57:27 by oelbied           #+#    #+#              #
#    Updated: 2025/02/01 12:46:21 by oelbied          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = ft_algo.c ft_atoi.c ft_f_three.c ft_index.c ft_isdigit.c ft_lstadd_back.c  \
		ft_lstclear.c ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_push.c ft_push_swap.c \
		ft_revers_rotute.c ft_rotute.c ft_split.c ft_strlcpy.c ft_strlen.c ft_tchek_swap.c \
		push_swap.c ft_parsing.c

BONUS_SRC = cheack_bonus2.c cheack_bonus.c ft_atoi_bonus.c ft_linkd_list_bonus.c ft_isdigit_bonus.c \
			ft_lstadd_back_bonus.c ft_clear_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c \
			ft_push_swap_bonus.c  ft_revers_rotute_bonus.c ft_push_bonus.c ft_rotute_bonus.c ft_split_bonus.c \
			ft_strlcpy_bonus.c ft_strlen_bonus.c ft_tchek_swap_bonus.c get_next_line_utils.c get_next_line.c \
			ft_strcmp_bonus.c ft_parsing_bonus.c

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${BONUS_SRC:.c=.o}
CC = cc 
CFLAGS = -Wall -Wextra -Werror 
NAME = push_swap
BONUS = checker

all: ${NAME} 

${OBJS}:%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
	
${NAME}: ${OBJS}
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)


bonus: ${BONUS}

${OBJS_BONUS}: %.o: %.c push_swap_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@
	
${BONUS}: ${OBJS_BONUS}
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $@

clean:
	rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
	rm -rf ${NAME} ${BONUS}

re: fclean all
