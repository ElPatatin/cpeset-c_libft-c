# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpeset-c <cpeset-c@student.42barce>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 18:29:13 by cpeset-c          #+#    #+#              #
#    Updated: 2022/12/06 21:31:21 by cpeset-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -=-=-=-=-	NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

NAME    	= liboutput.a
MKFL		= Makefile

# -=-=-=-=-	CLRS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

DEF_CLR	:= \033[0;39m
GRAY	:= \033[0;90m
RED		:= \033[0;91m
GREEN	:= \033[0;92m
YELLOW	:= \033[0;93m
BLUE	:= \033[0;94m
MAGENTA	:= \033[0;95m
CYAN	:= \033[0;96m
WHITE	:= \033[0;97m

# -=-=-=-=-	PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

INC_DIR	= inc/
SRC_DIR	= src/
UTL_DIR	= util/
LIB_DIR	= library/
BNS_DIR	= bonus/
OBJ_DIR	= .obj/

# -=-=-=-=-	CMND -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

CFLAGS	= -Wall -Wextra -Werror -W -O3 -Ofast
DFLAGS	= -MT $@ -MMD -MP
XFLAGS	= -g3 -fsanitize=address

AR		= ar -rcs
RM		= rm -f
MK		= mkdir -p
CP		= cp -f

# -=-=-=-=-	FILE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

LIB		= $(LIB_DIR)libft.a
INCLUDE	= -I $(INC_DIR)

PRT_SRC	= ft_printf.c\
		parser.c\
		init_params.c\
		err_checks.c

PRT_UTL	= ft_printf_utils.c\
		chars_utils.c\
		nbrs_utils.c\
		margin_utils.c

SRCS	+= $(addprefix $(SRC_DIR), $(PRT_SRC))
SRCS	+= $(addprefix $(UTL_DIR), $(PRT_UTL))

OBJS	= $(addprefix $(OBJ_DIR), $(SRCS:.c=.o))
DEPS	= $(addsuffix .d, $(basename $(OBJS)))

# -=-=-=-=-	RULE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

$(OBJ_DIR)%.o: %.c $(MKFL)
	@$(MK) $(dir $@)
	@printf "\r$(GREEN)\tCompiling: $(YELLOW)$< $(DEF_CLR)                   \r"
	@$(CC) $(CFLAGS) $(DFLAGS) $(XFLAGS) $(INCLUDE) -c $< -o $@

all:
	@$(MAKE) -C $(LIB_DIR)
	@$(MAKE) $(NAME)

$(NAME):: $(OBJS)
	@$(CP) $(LIB) ./$(NAME)
	@$(AR) $(NAME) $(OBJS)
	@printf "\n\t$(WHITE)Library for \033[1;31m'output' $(WHITE)has been compiled!$(DEF_CLR) \n"

$(NAME)::
	@printf "\t$(WHITE)Nothing more to be done for library \033[1;31m'output'.$(DEF_CLR) \n"

-include $(DEPS)

clean:
	@$(MAKE) clean -C $(LIB_DIR)
	@$(RM) -r $(OBJ_DIR)
	@echo "$(BLUE)	'Output' object files cleaned.$(DEF_COLOR)"

fclean: 
	@$(MAKE) clean
	@$(MAKE) fclean -C $(LIB_DIR)
	@$(RM) $(NAME) $(BNUS)
	@echo "$(WHITE)	All objects, dependencies and executables removed from 'output' library.$(DEF_COLOR)"

re:
	@$(MAKE) fclean
	@$(MAKE) all
	@echo ""
	@echo "$(GREEN)	Cleaned and rebuilt everything for 'output' library.$(DEF_COLOR)"

.PHONY: all clean fclean re
