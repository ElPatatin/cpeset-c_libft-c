# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpeset-c <cpeset-c@student.42barce>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 16:24:27 by cpeset-c          #+#    #+#              #
#    Updated: 2022/12/07 16:27:46 by cpeset-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -=-=-=-=-	CMND -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

CFLAGS	= -Wall -Werror -Wextra
RM		= rm -f
CP		= cp -f

# -=-=-=-=-	PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

LIBRARY	= library/
LIB_DIR	= libft/
PNT_DIR	= liboutput/

# -=-=-=-=-	FILE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

LIBFT	= $(LIB_DIR)libft.a
PRINT	= $(PNT_DIR)liboutput.a

# -=-=-=-=-	RULE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all:
	@$(MAKE) makelibft
	@$(MAKE) makeprint

libft:
	@$(MAKE) makelibft

print:
	@$(MAKE)makeprint

#-=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=-=--=- #

makelibft:
	@$(MAKE) -C $(LIB_DIR)
	@$(CP) $(LIBFT) ./

makeprint:
	@$(MAKE) -C $(PNT_DIR)
	@$(CP) $(PRINT) ./

clean:
	@$(MAKE) clean -C $(LIB_DIR)
	@$(MAKE) clean -C $(PNT_DIR)

fclean:
	@$(RM) $(NAME) ./*.out
	@$(MAKE) fclean -C $(LIB_DIR)
	@$(MAKE) fclean -C $(PNT_DIR)

re:
	@$(MAKE) fclean
	@$(MAKE)

.PHONY:	all libft printf gnl clean fclean re
