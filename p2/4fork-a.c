#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define N 5 

int contador;
int status=0;

int main()
{
  	int i;
	status=0;
	for(i=0;i<N;i++){
	        if(!fork()){
			sleep(5);
			exit(1);
		}
	}

	for(int i=0; i<N; i++){
		wait(&status);
		contador=contador+WEXITSTATUS(status);	        
	
	}
	
    printf("soy el pid=%d, y tengo %d desendientes \n",getpid(), contador);
    sleep(10);

    return 1;
}
