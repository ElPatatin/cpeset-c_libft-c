# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpeset-c <cpeset-c@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 16:24:27 by cpeset-c          #+#    #+#              #
#    Updated: 2022/07/16 16:24:29 by cpeset-c         ###   ########.fr        #
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

CFLAGS		= -Wall -Werror -Wextra -MMD $(INCLUDE)
AR		= ar -rcs
RM		= rm -f
MKDIR		= mkdir -p
CP		= cp -f

# -=-=-=-=-	PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

SRC_DIR	= src/
OBJ_DIR	= obj/
INC_DIR	= inc/

FIS_DIR	= ft_is/
MTH_DIR = ft_math/
MEM_DIR	= ft_mem/
PUT_DIR	= ft_put/
SRT_DIR	= ft_sort/
STR_DIR	= ft_str/

LST_DIR	= ft_list/

PRN_DIT	= ft_printf/

GNL_DIR	= ft_gnl/

# -=-=-=-=-	FILE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

FIS_SRC	= ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_islower.c ft_isupper.c ft_isprint.c ft_isspace.c

MTH_SRC	= ft_absval.c ft_atoi.c ft_atoi_base.c ft_factorial.c \
		ft_find_next_prime.c ft_itoa.c ft_itoa_base.c ft_lcm.c \
		ft_nbrlen.c ft_nbrlen_base.c ft_power.c ft_prime.c \
		ft_sqrt.c

MEM_SRC	= ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c \
		ft_memfree.c ft_memmove.c ft_memset.c ft_range.c \
		ft_rrange.c ft_strdup.c ft_ultrange.c

PUT_SRC	= ft_putchar.c ft_putchar_fd.c ft_putnbr.c ft_putnbr_base.c \
		ft_putstr.c ft_putstr_fd.c

SRT_SRC	= ft_adv_sort_str_tab.c ft_any.c ft_count_if.c ft_foreach.c \
		ft_is_sort.c ft_map.c ft_rev_int_tab.c ft_sort_int_tab.c \
		ft_sort_str_tab.c ft_split.c ft_striteri.c ft_strmapi.c \
		ft_swap.c 

STR_SRC	= ft_str_wcount.c ft_strcapitalize.c ft_strchr.c ft_strrchr.c \
		ft_strcmp.c ft_strcpy. ft_strcspn.c ft_strjoin.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c  ft_strncmp.c \
		ft_strnstr.c ft_strtrim.c ft_strupcase.c ft_strlowcase.c \
		ft_substr.c ft_tolower.c ft_toupper.c

LST_SRC	= ft_lstadd_back.c ft_lstadd_front.c ft_lstat.c ft_lstclear.c \
		ft_lstdelone.c ft_lstfind.c ft_lstforeach.c ft_lstforeach_if .c \
		ft_lstlast.c ft_lstmap.c ft_lstmerge.c ft_lstmerge_sort.c \
		ft_lstnew.c ft_lstnew_elt.c ft_lstpush_back.c ft_lstpush_front.c \
		ft_lstpush_strs.c ft_lstremove_if.c ft_lstreverse.c ft_lstreverse_fun.c \
		ft_lstsize.c ft_lstsort.c ft_lstsort_insert.c ft_lstswap.c

PRN_SRC	= ft_printf.c ft_char_utils.c ft_nbr_utils.c ft_ptr_utils.c

GNL_SRC	= get_next_line.c

# -=-=-=-=-	RULE -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(MKDIR) $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

-include $(DEP)

.PHONY:	all clean fclean re