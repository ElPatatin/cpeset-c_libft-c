# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpeset-c <cpeset-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 16:24:27 by cpeset-c          #+#    #+#              #
#    Updated: 2022/08/28 18:47:56 by cpeset-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -=-=-=-=-	NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

NAME	=	lib.a

# -=-=-=-=-	CLRS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

DEF_COLOR := \033[0;39m
GRAY := \033[0;90m
RED := \033[0;91m
GREEN := \033[0;92m
YELLOW := \033[0;93m
BLUE := \033[0;94m
MAGENTA := \033[0;95m
CYAN := \033[0;96m
WHITE := \033[0;97m

# -=-=-=-=-	CMND -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

CFLAGS		= -Wall -Werror -Wextra
AR		= ar -rcs
RM		= rm -f
MD		= mkdir -p
CP		= cp -f
MV		= mv -f

# -=-=-=-=-	PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

LIB_DIR	= libft/
LST_DIR	= ft_list/
PRN_DIR	= ft_printf/
GNL_DIR	= ft_gnl/

# -=-=-=-=-	FILE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

LIBFT	= $(LIB_DIR)libft.a
LISTS	= $(LST_DIR)liblist.a
PRINTF	= $(PRN_DIR)libprintf.a
FUNGNL	= $(GNL_DIR)libgnl.a

# -=-=-=-=-	RULE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: makelibft makelists makeprintf makegnl

libft: makelibft

lists: makelibft makelists

printf: makelibft makeprintf

gnl: makelibft makegnl

#-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=- #

makelibft:
	@make -C $(LIB_DIR)
	$(MV) $(LIBFT) .

makelists:
	@make -C $(LST_DIR)
	$(MV) $(LISTS) .

makeprintf:
	@make -C $(PRN_DIR)
	$(MV) $(PRINTF) .

makegnl:
	@make -C $(GNL_DIR)
	$(MV) $(FUNGNL) .

clean:
	@$(RM) -r $(OBJ_DIR)
	@make clean -C $(LIB_DIR)
	@make clean -C $(LST_DIR)
	@make clean -C $(PRN_DIR)
	@make clean -C $(GNL_DIR)

fclean: clean
	@$(RM) $(NAME) ./*.out
	@make fclean -C $(LIB_DIR)
	@make fclean -C $(LST_DIR)
	@make fclean -C $(PRN_DIR)
	@make fclean -C $(GNL_DIR)

re: fclean all

.PHONY:	all libft lists printf gnl clean fclean re
