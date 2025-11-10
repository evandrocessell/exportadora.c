#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "Portuguese");

    char destino;
    float valorImportacao, imposto = 0;

    printf("Importaremos para a Alemanha (A), Espanha (E) ou Itália (I)?: ");
    scanf(" %c", &destino);

    printf("Qual o valor que vamos exportar?: ");
    scanf("%f", &valorImportacao);

    switch (destino) {
        case 'A':
            imposto = 0.65; 
            break;
        case 'E':
            imposto = 0.47; 
            break;
        case 'I':
            imposto = 0.45; 
            break;
        default:
            printf("Favor digitar A, E ou I.\n");
            return 1; 
    }

    printf("O valor da importação com imposto será de: R$ %.2f\n",
           valorImportacao + (valorImportacao * imposto));

    return 0;
}

