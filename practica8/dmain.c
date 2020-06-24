#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dlist.h"

int main(){	
    int op = 0;
    int dato;
    int posicion;
    int *n;
    int i;
    dlist *l = create_dlist();
    
    printf("Elija una opcion: \n");
    printf("1) Añadir\n");
    printf("2) Eliminar (por dato)\n");
    printf("3) Eliminar (por posicion)\n");
    printf("4) Buscar (por dato)\n");
    printf("5) Buscar (por posicion)\n");
    printf("6) Buscar (encuentra el nodo)\n");
    printf("7) Imprimir\n");
    printf("8) Salir\n");
            
    while (op!=8){
        printf("\n¿Que desea hacer?: ");
        scanf("%i", &op);
        switch(op){
            case 1:
                printf("\n¿Que dato desea agregar?: ");
                scanf("%i",&dato);
                printf("\n¿En que posicion?: ");
                scanf("%i",&posicion);
                insert_dlist(l,dato,posicion);
            break;
            case 2:
                printf("\n¿Que dato desea eliminar?: ");
                scanf("%i",&dato);
                delete_data(l,dato);
                printf("Se elimino: %i",dato);
            break;                
            case 3:
                printf("\n¿Que posicion desea eliminar?: ");
                scanf("%i",&posicion);
                remove_pos(l,posicion);
                printf("Se elimino en la posicion: %i",posicion);
            break;
            case 4:
                printf("\n¿Que dato desea buscar?: ");
                scanf("%i",&dato);
                i = locate_dlist(l,dato);
                printf("Se encontro en: %i",i);
            break;
            case 5:
                printf("\n¿Que posicion desea buscar?: ");
                scanf("%i",&posicion);
                i = search_dlist(l,posicion);
                printf("Se encontro: %i",i);
            break;
            case 6: 
                printf("\n¿Que posicion desea buscar?: ");
                scanf("%i",&posicion);
                n = search_dnode_dlist(l,posicion);
                printf("Se encontro en el nodo: %p",n);
            break;
            case 7:
                print_dlist(l);
            break;
            case 8:
                printf("\nHasta pronto");
                remove_dlist(l);
                l = NULL;
            break;
            default:    
                printf("Error, vuelva a ingresar");
        }
    }
    return 0;
}