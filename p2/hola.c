#include <stdio.h>
	int main(int argc, char *argv[])
{
	int op = 1;
	while (op!=0)
	{
		printf("Hola %s \n",argv[1]);
		printf("Escribe un número (0 para finalizar): ");
		scanf(" %d",&op);
	}
	return 0;
}
