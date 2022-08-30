# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpeset-c <cpeset-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 16:24:27 by cpeset-c          #+#    #+#              #
#    Updated: 2022/08/30 11:11:32 by cpeset-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -=-=-=-=-	NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

NAME	=	lib.a

# -=-=-=-=-	CMND -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

CFLAGS		= -Wall -Werror -Wextra
AR		= ar -rcs
RM		= rm -f
MD		= mkdir -p
CP		= cp -f
MV		= mv -f

# -=-=-=-=-	PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

LIBRARY	= library/
LIB_DIR	= libft/
LST_DIR	= ft_list/
PNT_DIR	= ft_printf/
GNL_DIR	= ft_gnl/

# -=-=-=-=-	FILE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

LIBFT	= $(LIB_DIR)libft.a
LISTS	= $(LST_DIR)liblist.a
PRINTF	= $(PRN_DIR)libprintf.a
FUNGNL	= $(GNL_DIR)libgnl.a

# -=-=-=-=-	RULE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: makelibft makelists makeprintf makegnl
	@$(CP) $(FUNGNL) ./$(NAME)

# libft: makelibft

# lists: makelibft makelists

# printf: makelibft makeprintf

# gnl: makelibft makegnl

#-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=- #

makelibft:
	@make -C $(LIB_DIR)

makelists:
	@make -C $(LST_DIR)

makeprintf:
	@make -C $(PNT_DIR)

makegnl:
	@make -C $(GNL_DIR)

clean:
	@$(RM) -r $(OBJ_DIR)
	@make clean -C $(LIB_DIR)
	@make clean -C $(LST_DIR)
	@make clean -C $(PNT_DIR)
	@make clean -C $(GNL_DIR)

fclean: clean
	@$(RM) $(NAME) ./*.out
	@make fclean -C $(LIB_DIR)
	@make fclean -C $(LST_DIR)
	@make fclean -C $(PNT_DIR)
	@make fclean -C $(GNL_DIR)

re: fclean all

.PHONY:	all libft lists printf gnl clean fclean re
