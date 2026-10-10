/***
"""
### UDT - USER DEFINED DATA TYPE (UDT) 
### UN UDT ES UNA ESTRUCTURA DE DATOS PERSONALIZADA QUE AGRUPA VARIOS ELEMENTOS O VARIABLES BAJO UN MISMO NOMBRE, PERMIRE COMBINAR
### DIFERENTES TIPOS DE DATOS BASICOS (COMO BOOLEANOS, ENTEROS, REALES O STRNGS) EN UN SOLO PAQUETE LOGIO
### REUTILIZABLE: SE CREA UNA SOLA VEZ Y SE PUEDE USAR COMO PLANTILLA PARA DECLARAR MULTIPLES VARIABLES IDENTICAS EN TODO EL PROGRAMA
### ACTUALIZACIÓN CENTRALIZADA: SI SE MODIFICA LA ESTRUCTURA DEL UDT ORGINAL, LOS CAMBIOS SE PROPAGAN O ACTUALIZAN EN LOS LUGARES DONDE SE USE
### ACCESO POR PUNTOS: SE ACCEDE A CADA MIEMBRO INDIVIDUAL USANDO NOTACIÓN DE PUNTO
"""
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct client {
    char Name[50];
    char Id[11];
    float Credit;
    char Address[100];
};

int main(void) {
    struct client client1 = {0};

    strcpy(client1.Name, "Danny Fernandez");
    strcpy(client1.Id, "0000000001");
    client1.Credit = 10000.0f;
    strcpy(client1.Address, "Solano Caqueta");

    printf("The Client name is: %s\n", client1.Name);
    printf("The Client Id is: %s\n", client1.Id);
    printf("The Client Credit is: %.2f\n", client1.Credit);
    printf("The Client Address is: %s\n", client1.Address);

    return 0;
}
