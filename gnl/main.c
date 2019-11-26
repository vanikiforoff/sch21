#include "get_next_line.h"
#include <stdio.h>


int main() {
	int fd;
	char *line;

	//line = NULL;
	fd = open("input.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
}