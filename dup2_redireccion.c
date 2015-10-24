#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
	int fd;
 
	fd = open("salida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1) {
		perror("fallo en open");
		exit(EXIT_FAILURE);
	}
 
	if (dup2(fd, STDOUT_FILENO) == -1) {
		perror("fallo en dup2");
		exit(EXIT_FAILURE);
	}
 
	if (close(fd) == -1) {
		perror("fallo en close");
		exit(EXIT_FAILURE);
	}
 
	printf("Hola Mundo\n");
}
