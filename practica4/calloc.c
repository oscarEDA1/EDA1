#include <stdio.h>
#include <stdlib.h>
/*La función calloc funciona de manera similar a la función malloc pero, además de reservar
memoria en tiempo real, inicializa la memoria reservada con 0. 
El parámetro nelem indica el número de elementos que se van a reservar y size indica el
tamaño de cada elemento.*/
 int *arreglo, num, cont;
 printf("¿Cuantos elementos tiene el conjunto?\n");
 scanf("%d",&num);
 arreglo = (int *)calloc (num, sizeof(int));
 if (arreglo!=NULL) {
 printf("Vector reservado:\n\t[");
 for (cont=0 ; cont<num ; cont++){
 printf("\t%d",*(arreglo+cont));
 }
 printf("\t]\n");
 printf("Se libera el espacio reservado.\n");
 free(arreglo);
 }
 return 0;
}