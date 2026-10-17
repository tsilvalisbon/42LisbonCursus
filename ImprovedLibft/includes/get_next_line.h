#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*gnl_strjoin(char *s1, char *s2);
int		gnl_strlen(char *str);
void	manage_buffer(char *buffer);
char	*gnl_strchr(const char *str, int c);
char	*read_and_join_line(int fd, char *line, char *rest);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif