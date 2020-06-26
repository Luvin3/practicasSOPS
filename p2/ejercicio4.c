#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main()
{       int tid;
	printf("antes del execl soy el papa\n");

       	tid=fork();
	if(tid==0)
	   execl("./cal","cal",NULL);
	printf("despues del execl soy el papa\n");

	sleep(40);

}
