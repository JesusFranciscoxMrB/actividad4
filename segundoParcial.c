#include <stdio.h>


void pausa(){
    printf("\n Presione ENTER para continuar...");
    while (getchar()!= '\n');
}


void imprimirMenu() {
    printf("\n-----------------------------------------------------\n");
    printf("\nSistema de ALTA de caninos\n\n");
    printf("MENU:\n\n");
    printf(" a). INGRESAR canino\n");
    printf(" b). MOSTRAR caninos\n");
    printf(" c). SALIR\n");
    printf("\nSELECCIONES una opcion y presione ENTER: ");

}

struct Canino {
    char name[50];
    char breed[50];
    char birth[15];
};

int main() {
    struct Canino puppies[5];
    int amount = 0;
    char option;

    do {
       imprimirMenu();
        scanf(" %c", &option);
        while(getchar() != '\n');

        
        switch (option) {
            case 'a':
            case 'A':
                if (amount >= 5) {
                    printf("\n===== LIMITE de caninos ALCANZADO =====\n");
                
                } else {
                    printf("\nINGRESE el NOMBRE: ");
                    scanf(" %[^\n]", puppies[amount].name);

                    printf("\nINGRESE la RAZA: ");
                    scanf(" %[^\n]", puppies[amount].breed);

                    printf("\nINGRESE la FECHA DE NACIMIENTO. Use el siguiente formato (DD/MM/AAAA): ");
                    scanf(" %[^\n]", puppies[amount].birth);

                    amount++;
                    printf("\n===== Canino AGREGADO CORRECTAMENTE. =====\n");

                    getchar();
                }
                
                pausa();
                break;

            case 'b':
            case 'B':
                if (amount == 0) {
                    printf("\n===== NO se ha AGREGADO NINGUN canino =====\n");
                } else {
                    for (int i = 0; i < amount; i++) {
                        printf("========================================");
                        printf("\nCanino %d:\n", i + 1);
                        printf("  NOMBRE: %s\n", puppies[i].name);
                        printf("  RAZA: %s\n", puppies[i].breed);
                        printf("  FECHA DE NACIMIENTO: %s\n", puppies[i].birth);
                    }
                    if (amount == 5) {
                        printf("\n===== LIMITE de caninos ALCANZADO =====\n");
                    }
                }
                pausa();
                break;
                

            case 'c':
            case 'C':
                printf("\n===== PROGRAMA FINZALIZADO. =====\n\n");
                break;

            default:
                printf("\n===== OPCION NO VALIDA. =====\n");
                pausa();
        }
        

    } while (option != 'c' && option != 'C');

    return 0;
}
