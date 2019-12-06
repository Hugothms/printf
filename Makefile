# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/27 13:45:08 by hthomas           #+#    #+#              #
#    Updated: 2019/12/06 14:31:31 by hthomas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C = gcc
CFLAGS += -Wall -Werror -Wextra -pedantic -g -fsanitize=address
LDFLAGS +=  -fsanitize=address

SRCS = 	ft_printf.c			\
		ft_s_printf_utils.c	\
		ft_char.c			\
		ft_hex.c			\
		ft_integer.c		\
		ft_pointer.c		\
		ft_string.c			\
		ft_unsigned_int.c	\
		ft_width.c			\
		ft_flags.c			\
		ft_atoi_no_sign.c

OBJS = $(SRCS:.c=.o)
LIB = libftprintf.a
INCLUDES = ft_printf.h

LIBFT = libft.a
LIBFTDIR = libft/
MAKE = make

EXEC = test.out
EXEC_HARDCORE = test_hardcore.out
EXEC_test = test_test.out









###########################
BLACK_FG =	\033[38;5;0m
RED_FG =	\033[38;5;196m
REDL_FG =	\033[1;31m
GREEN_FG =	\033[38;5;46m
CYAN_FG =	\033[0;36m
YELLOW_FG =	\033[1;33m

BLACK_BG =	\033[48;5;0m
BLUE_BG =	\033[48;5;39m
PINK_BG =	\033[48;5;213m
YELLOW_BG =	\033[48;5;11m
RANLIB_BG =	\033[48;5;172m
GREEN_BG =	\033[48;5;46m

CLEAR_COLOR =	\033[m
###########################


all:		$(LIB)

$(LIB):		$(LIBFT) $(OBJS) $(INCLUDES)
	@echo "Creating $(GREEN_FG)libftprintf.a$(CLEAR_COLOR)"
	@ar rcs $@ $^
	@ranlib $@
	@echo "$(GREEN_BG)$(BLACK_FG)Done$(CLEAR_COLOR)"


$(LIBFT):	$(LIBFTDIR)*.c $(LIBFTDIR)*.h
	@echo "Compiling $(GREEN_FG).c $(CLEAR_COLOR)in $(YELLOW_BG)$(BLACK_FG)libft/$(CLEAR_COLOR)"
	@cd $(LIBFTDIR) && $(MAKE)
	@cp $(LIBFTDIR)$@ .

clean:
	@echo "$(REDL_FG)Deleting .o$(CLEAR_COLOR)"
	@cd $(LIBFTDIR) && $(MAKE) clean
	@rm -rf $(OBJS) $(LIBFT)

fclean:		clean
	@echo "$(RED_FG)Deleting exe$(CLEAR_COLOR)"
	@cd $(LIBFTDIR) && $(MAKE) fclean
	@rm -f $(LIB) $(EXEC) $(EXEC_HARDCORE) $(EXEC_test)

re:		fclean all


.c.o:
	@${CC} ${CFLAGS} -I$(INCLUDES) -c $< -o ${<:.c=.o}



test:	$(EXEC)
	@./$<

$(EXEC):	$(INCLUDES) $(SRCS) main.c $(LIBFT)
	@$(C) $(CFLAGS) -o $@ -I$^

test_hardcore: $(EXEC_HARDCORE)
	@./$<

$(EXEC_HARDCORE):	$(INCLUDES) $(SRCS) main_hardcore.c $(LIBFT)
	@$(C) $(LDFLAGS) -o $@ -I$^


test_test: $(EXEC_test)
	@./$<

$(EXEC_test):	$(INCLUDES) $(SRCS) main_test.c $(LIBFT)
	@$(C) $(LDFLAGS) -o $@ -I$^
