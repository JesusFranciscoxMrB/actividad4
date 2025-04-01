#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void pausa() {
    printf("\nPresione ENTER para continuar...");
    while (getchar() != '\n');
    
}


int main() {
    char name[100];
    float height;
    char birth[20];
    char address[100];
    char gender;
    char account[20];
    char option;
    char major[4];
    
    do {
        printf("\n-----------------------------------------------------\n");
        printf("\nIntroduzca los DATOS del alumno como corresponda.\n\n");
        printf("NOTA: Asegurece de introducir cada uno de los datos solicitados\n");
        printf("\nMENU:\n\n");
        printf("A. NOMBRE COMPLETO del alumno\n");
        printf("B. ALTURA del alumno\n");
        printf("C. FECHA DE NACIMIENTO del alumno\n");
        printf("D. DIRECCION del alumno\n");
        printf("E. GENERO alumno (M/F)\n");
        printf("F. NUMERO DE CUENTA del alumno\n");
        printf("G. CARRERA\n");
        printf("H. MOSTRAR INFORMACION INGRESADA\n");
        printf("I. SALIR\n");
        printf("\nSELECCIONE una opcion y presiones ENTER: ");
        scanf(" %c", &option);
        while (getchar() != '\n');


        switch (option) {

            case 'a':
            case 'A':

                printf("\nIngrese NOMBRE COMPLETO (Nombres/Apellido/Apellido): ");
                scanf(" %[^\n]", name);
                printf("\n");
                
                break;

            case 'b':
            case 'B':

                printf("\nIngrese ALTURA en metros (ej: 1.72): ");
                scanf("%f", &height);
                while (getchar() != '\n');
                
                break;

            case 'c':
            case 'C':

                printf("\nIngrese FECHA DE NACIMIENTO. Use el siguiente formato (DD/MM/AAAA): ");
                scanf(" %s", birth);
                
                break;

            case 'd':
            case 'D':

                printf("\nIngrese DIRECCION: ");
                scanf(" %[^\n]", address);

                break;

            case 'e':
            case 'E':

                while (1){
                    printf("\nIngrese GENERO (M/m: Masculino, F/f: Femenino): ");
                    scanf(" %c", &gender);
                    while (getchar() != '\n');

                    if (gender == 'M' || gender == 'm') {
                        printf("GENERO ingresado = * Masculino *\n");
                        break;
                    } else if (gender == 'F' || gender == 'f') {
                        printf("GENERO ingresado: * FEMENINO *\n");
                        break;
                    } else {
                        printf("\nGENERO no valido. Intente nuevamente.\n"); 

                    }
                }
                pausa();
                break;

            case 'f':
            case 'F':

                printf("\nIngrese NUMERO DE CUENTA: ");
                scanf(" %s", account);
        
                break;

            case 'g':
            case 'G':

                
                printf("\nIngrese CARRERA usando las siguientes siglas: \n");
                printf("\n  - IIN - : Ingenieria Industrial");
                printf("\n  - ICO - : Ingenieria en Computacion");
                printf("\n  - REI - : Relaciones Internacionales"); 
                printf("\n  - ISC - : Ingenieria en Sistemas y Comunicaciones");
                printf("\n  - LIA - : Licenciatura en Informatica Administrativa");
                printf("\n  - LDE - : Licenciatura en Derecho");

                while (1) {
                    printf("\nIngrese SIGLAS: ");
                    scanf("%3s", major);
                    while (getchar() != '\n');
            
                if (strcmp(major, "IIN") == 0 || strcmp(major, "iin") == 0) {
                    printf("\nElegiste Ingenieria Industrial\n");
                    break;
                } else if (strcmp(major, "ICO") == 0 || strcmp(major, "ico") == 0) {
                    printf("\nElegiste Ingenieria en Computacion\n");
                    break;
                } else if (strcmp(major, "REI") == 0 || strcmp(major, "rei") == 0) {
                    printf("\nElegiste Relaciones Internacionales\n");
                    break;
                } else if (strcmp(major, "ISC") == 0 || strcmp(major, "isc") == 0) {
                    printf("\nElegiste Ingenieria en Sistemas y Comunicaciones\n");
                    break;
                } else if (strcmp(major, "LIA") == 0 || strcmp(major, "lia") == 0) {
                    printf("\nElegiste Licenciatura e Informatica Administrativa\n");
                    break;
                } else if (strcmp(major, "LDE") == 0 || strcmp(major, "lde") == 0) {
                    printf("\nElegiste Licenciatrua en Derecho\n");
                    break;

                } else {
                    printf("\nDATO invalido. Intente nuevamente.\n");
                }
            }    
                pausa();
                break;

            case 'h':
            case 'H':

                if (name[0] == '\0' || height == '0' || birth[0] == '\0' || 
                    address[0] == '\0' || gender == '\0' || account[0] == '\0' || major[0] == '\0') {
                    printf("\nTODOS LOS DATOS SON OBLIGATORIOS.\n\n");


                } else {
                    printf("\n-----------------------------------------------------\n");
                    printf("\nINFORMACION DEL ALUMNO:\n\n");
                    printf("NOMBRE: %s\n", name);
                    printf("ALTURA: %.2f metros\n", height);
                    printf("FECHA DE NACIMIENTO: %s\n", birth);
                    printf("DIRECCION: %s\n", address);
                    printf("GENERO: %c\n", gender);
                    printf("NUMERO DE CUENTA: %s\n", account);
                    printf("CARRERA: %s\n" , major);
                    printf("\n\nVERIFIQUE QUE SUS DATOS SEAN CORRECTOS ANTES DE CONTINUAR\n\n");
                }
                pausa();
                break;

            case 'i':
            case 'I':
            
                printf("\nPROGRAMA FINALIZADO.\n\n");
                break;

            default:
                printf("\nOPCION NO VALIDA. Introduza una opcion valida.\n\n");
                pausa();
                break;

        }
    } while (option != 'i' && option != 'I' );

    return 0;
}