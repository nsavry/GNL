#include <stdio.h>
#include "get_next_line.h"

int		get_next_line(const int fd, char **line);

int		main(void)
{
	char	*line;

	while (get_next_line(0, &line) != 0)
		printf("%s\n",  line);
	return (0);
}
