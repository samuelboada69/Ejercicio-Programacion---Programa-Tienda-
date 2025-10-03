#include <stdio.h>

int main(){

    int id;
    char nombre[50];
    int stock;
    float precio;
    int opcion = 0;
    int cantidad;
    float ganancias = 0;

    printf("Ingresa el ID del producto: ");
    scanf("%d",&id);

    printf("Ingresa nombre del producto: ");
    scanf("%s",nombre);

    printf("Ingresa el stock inicial: ");
    scanf("%d",&stock);

    printf("Ingresa precio por unidad: ");
    scanf("%f",&precio);

    while(opcion != 5){
        printf("\n1. Vender\n");
        printf("2. Reabastecer\n");
        printf("3. Ver producto\n");
        printf("4. Ver ganancias\n");
        printf("5. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d",&opcion);

        if(opcion==1){
            printf("Que cantidad quieres vender? : ");
            scanf("%d",&cantidad);
            if(cantidad<=stock){
                stock = stock - cantidad;
                ganancias = ganancias + (cantidad * precio);
                printf("Venta Completada.\n");
            } else {
                printf("No hay suficiente stock.\n");
            }
        }

        if(opcion==2){
            printf("Cuantas unidades quieres agrega: ");
            scanf("%d",&cantidad);
            stock = stock + cantidad;
            printf("Stock actualizado.\n");
        }

        if(opcion==3){
            printf("ID: %d\n",id);
            printf("Nombre: %s\n",nombre);
            printf("Stock: %d\n",stock);
            printf("Precio: %.2f\n",precio);
        }

        if(opcion==4){
            printf("Ganancias Obtenidas: %.2f\n",ganancias);
        }

        if(opcion==5){
            printf("Saliendo Del Programa\n");
        }
    }

    return 0;
}




