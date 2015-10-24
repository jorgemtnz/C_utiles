#include <stdlib.h>     
#include <fcntl.h>      
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>     
#include <unistd.h>     /* para STDIN_FILENO, STDOUT_FILENO y STDERR_FILENO */
 
 
int main(void){
 
    if(write(STDOUT_FILENO, "Hola Mundo\n", strlen("Hola Mundo\n")) == -1){
        perror("Error en write");
        exit(EXIT_FAILURE);
    }
 
}
