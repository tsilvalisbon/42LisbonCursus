#include "includes/get_next_line.h"

char	*get_next_line(int fd)
{
	static char	rest[BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = gnl_strjoin(NULL, rest);
	if (!line)
		return (manage_buffer(rest), NULL);
	line = read_and_join_line(fd, line, rest);
	if (!line)
		return (free(line), NULL);
	if (gnl_strchr(line, '\n'))
	{
		manage_buffer(rest);
		return (line);
	}
	if (line[0] == '\0')
		return (free(line), NULL);
	rest[0] = '\0';
	return (line);
}
