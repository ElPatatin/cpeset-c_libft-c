#ifndef LIB_FT_GNL_H
# define LIB_FT_GNL_H

# include "lib_ft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	(int)1
# endif

char	*get_next_line(int fd);
char	*ft_save_buff(char *buff);
char	*ft_get_line(char *buff);
char	*ft_read_save(int fd, char *buff);

#endif
