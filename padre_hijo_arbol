#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
 
#define NUM_HIJOS 2 /* número de hijos a crear. */
 
int main(void)
{
	int ret, i;
 
	for (i=0; i<NUM_HIJOS; i++) {
		ret = fork();
		if (ret == 0) {
			/* estamos en alguno de los hijos. */
			switch(i) {
				case 0:
					/* tratamiento hijo 1. */
					exit(EXIT_SUCCESS);
				case 1:
					/* tratamiento hijo 2. */
					exit(EXIT_SUCCESS);
			}
		} else if (ret > 0) {
			/* tratamiento del padre */
		} else if (ret == -1) {
			perror("fallo en fork");
			exit(EXIT_FAILURE);
		}
	}
	ret = wait(NULL);
	while (ret > 0) {
		ret = wait(NULL);
	}
	/* si hay error, ignoramos si no hay más hijos a esperar. */
	if (ret == -1 && errno != ECHILD) {
		perror("fallo en wait");
		exit(EXIT_FAILURE);
	}
}
