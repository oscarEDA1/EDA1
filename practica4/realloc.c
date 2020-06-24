#include <stdio.h>
#include <stdlib.h>
/*La función realloc permite redimensionar el espacio asignado previamente de forma
dinámica, es decir, permite aumentar el tamaño de la memoria reservada de manera
dinámica.*/
/*Donde ptr es el apuntador que se va a redimensionar y size el nuevo tamaño, en bytes, que
se desea aumentar al conjunto.
Si el apuntador que se desea redimensionar tiene el valor nulo, la función actúa como la
función malloc, .*/
int main (){
 int *arreglo, *arreglo2, num, cont;
 printf("¿Cuántos elementos tiene el conjunto?\n");
 scanf("%d",&num);
 arreglo = (int *)malloc (num * sizeof(int));
 if (arreglo!=NULL) {
 for (cont=0 ; cont < num ; cont++){
 printf("Inserte el elemento %d del conjunto.\n",cont+1);
 scanf("%d",(arreglo+cont));
 }
 printf("Vector insertado:\n\t[");
 for (cont=0 ; cont < num ; cont++){
 printf("\t%d",*(arreglo+cont));
 }
 printf("\t]\n");
 printf("Aumentando el tamaño del conjunto al doble.\n");
 num *= 2;
 arreglo2 = (int *)realloc (arreglo,num*sizeof(int));
 if (arreglo2 != NULL) {arreglo = arreglo2;
 for (; cont < num ; cont++){
 printf("Inserte el elemento %d del conjunto.\n",cont+1);
 scanf("%d",(arreglo2+cont));
 }
 printf("Vector insertado:\n\t[");
 for (cont=0 ; cont < num ; cont++){
 printf("\t%d",*(arreglo2+cont));
 }
 printf("\t]\n");
 }
 free (arreglo);
 }
 return 0;
}