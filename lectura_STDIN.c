#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>        /* para STDIN_FILENO */
 
int main(void)
{
       char buf[4096];
 
       numbytes = read(STDIN_FILENO, buf, sizeof(buf));
       while (numbytes > 0) {
	       /*
	        * AQUI VA EL TRATAMIENTO QUE PIDA EL EJERCICIO.
	        */
	       numbytes = read(STDIN_FILENO, buf, sizeof(buf));
       }
       if (numbytes == -1) {
               perror("fallo en read");
	       exit(EXIT_FAILURE);
       }
}
