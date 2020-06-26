//Padre con 3 hijos
//Papa con 3 hijos y cada hijo tiene 2
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
 pid_t pid;
 int x,y;

srand(getpid());
 int n=0;
n=1+rand()%5; 

 for(x=1;x<=n;x++)
 {
  
  pid=fork(); 
  if(pid)
  {
   printf("Soy el proceso %d\n",getpid());
   sleep(2);
  }

  else
  {
   printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
   sleep(2);
int m=0;
   m=1+rand()%5;
	
   for(y=1;y<=m;y++)
   {
    pid=fork();
     if(pid)
     {
      printf("Soy el proceso %d\n",getpid());
      sleep(2);
     }
     else
     {
      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
      sleep(2);
      exit(0);
     }
   }
   exit(0);
  }
  
 }
 return 0;
}
