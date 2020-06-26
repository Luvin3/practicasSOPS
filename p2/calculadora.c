#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc)
{
    int op, cont, status, i;
    float valoruno, valordos, resultado;
    do
    {
        printf("\n1.- Suma\n");
        printf("2.- Resta\n");
        printf("3.- Multiplicación\n");
        printf("4.- Division\n");
        printf("5.- Finalizar Proceso\n");
        printf("Seleccione la función a utilizar: ");
        scanf(" %d", &op);

        switch (op)
        {
        case 1:
            cont++;
            printf("\nValor uno: ");
            scanf("%f", &valoruno);
            printf("\nValor dos: ");
            scanf("%f", &valordos);
            resultado = (valoruno + valordos);
            printf("\nEl resultado de la suma es: %f\n", resultado);
            

            break;
        case 2:
            cont++;
            printf("\nValor uno: ");
            scanf("%f", &valoruno);
            printf("\nValor dos: ");
            scanf("%f", &valordos);
            resultado = (valoruno - valordos);
            printf("\nEl resultado de la resta es: %f\n", resultado);
            
            break;
        case 3:
            cont++;
            printf("\nValor uno: ");
            scanf("%f", &valoruno);
            printf("\nValor dos: ");
            scanf("%f", &valordos);
            resultado = (valoruno * valordos);
            printf("\nEl resultado de la multiplicación es: %f\n", resultado);
            
            break;
        case 4:
            cont++;
            printf("\nValor uno: ");
            scanf("%f", &valoruno);
            printf("\nValor dos: ");
            scanf("%f", &valordos);
            resultado = (valoruno / valordos);
            printf("\nEl resultado de la division es: %f\n", resultado);
            
            break;
        case 5:
            printf("Terminando...\n");
            break;
        default:
            printf("Opción no válida\n");
        }
    } while (op != 5);

    printf("Esperando a que finalicen todos los hijos...\n");
    for(i=0;i<cont;i++){
        wait(&status);
    }
    printf("Terminanado\n");

    return 0;
}