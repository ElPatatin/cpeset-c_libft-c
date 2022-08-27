# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpeset-c <cpeset-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 16:24:27 by cpeset-c          #+#    #+#              #
#    Updated: 2022/08/27 23:03:36 by cpeset-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -=-=-=-=-	NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

NAME	=	libft.a

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

# -=-=-=-=-	PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

CLIFT	= library/

LIB_DIR	= $(CLIFT)libft/
LST_DIR	= $(CLIFT)ft_list/
PRN_DIR	= $(CLIFT)ft_printf/
GNL_DIR	= $(CLIFT)ft_gnl/

SRC_DIR	= src/
OBJ_DIR	= obj/
INC_DIR	= inc/

# -=-=-=-=-	FILE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

# HDRS	= $(INC_DIR)
# INCLUDE	= -I $(HDRS)



# LST_SRC	= ft_lstadd_back.c ft_lstadd_front.c ft_lstat.c ft_lstclear.c \
# 		ft_lstdelone.c ft_lstfind.c ft_lstforeach.c ft_lstforeach_if.c \
# 		ft_lstlast.c ft_lstmap.c ft_lstmerge.c ft_lstmerge_sort.c \
# 		ft_lstnew.c ft_lstnew_elt.c ft_lstpush_back.c ft_lstpush_front.c \
# 		ft_lstpush_strs.c ft_lstremove_if.c ft_lstreverse.c ft_lstreverse_fun.c \
# 		ft_lstsize.c ft_lstsort.c ft_lstsort_insert.c ft_lstswap.c

# PRN_SRC	= ft_printf.c ft_char_utils.c ft_nbrs_utils.c ft_ptr_utils.c

# GNL_SRC	= get_next_line.c


# SRCS	+= $(addprefix $(LST_DIR), $(LST_SRC))
# SRCS	+= $(addprefix $(PRN_DIR), $(PRN_SRC))
# SRCS	+= $(addprefix $(GNL_DIR), $(GNL_SRC))

# OBJS	= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
# DEP		= $(addsuffix .d, $(basename $(OBJS)))

# -=-=-=-=-	RULE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: makelibft makelists makeprintf makegnl

libft: makelibft

lists: makelibft makelists

printf: makelibft makeprintf

gnl: makelibft makegnl

#-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=- #

makelibft:
	@make -C $(LIB_DIR)

makelists:
	@make -C $(LST_DIR)

makeprintf:
	@make -C $(PRN_DIR)

makegnl:
	@make -C $(GNL_DIR)

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