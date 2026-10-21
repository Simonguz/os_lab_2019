#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(){
    pid_t pid = fork(); //дочерний процесс 
    
    if(pid == 0)
        execl("./sequential_min_max", "sequential_min_max","67","100000",(char *)NULL); // равносильно запуску в терминале 

    int status;
    waitpid(pid,&status,0); // ждем успешного завершения 

    return 0;
}