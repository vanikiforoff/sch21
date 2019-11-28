#include "get_next_line.h"
#include <stdio.h>


int main() {
	int fd, fd2;
	int check;
	char *line;

	//line = NULL;
	//line = ft_strnew(1000);
	fd = open("input.txt", O_RDONLY);
	fd2 = open("input2.txt", O_RDONLY);
	check = get_next_line(fd2, &line);
	printf("%d %d %s\n", check, fd2, line);
	check = get_next_line(fd2, &line);
	printf("%d %d %s\n", check, fd2, line);
	check = get_next_line(fd2, &line);
	printf("%d %d %s\n", check, fd2, line);
	check = get_next_line(fd, &line);
	printf("%d %d %s\n", check, fd, line);
	check = get_next_line(fd, &line);
	printf("%d %d %s\n", check, fd, line);
	check = get_next_line(fd, &line);
	printf("%d %d %s\n", check, fd, line);
	check = get_next_line(fd, &line);
	printf("%d %d %s\n", check, fd, line);
	check = get_next_line(fd, &line);
	printf("%d %d %s\n", check, fd, line);
}