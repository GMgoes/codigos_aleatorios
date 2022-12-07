#include <iostream>

int main() {

    int tamanho = 5; int numero = 0; float somatorio = 0.0;

    //printf("Informe o tamanho do vetor \n");
    //scanf("%d",&tamanho);

    int vetor_numeros[tamanho];

    for(int contador = 0; contador < tamanho ; contador++){
        printf("Informe o: %d numero \n",contador+1);
        scanf("%d", &numero);
        vetor_numeros[contador] = numero;
        somatorio = somatorio + numero; // NOLINT(cppcoreguidelines-narrowing-conversions)
    }
    printf("A soma dos valores e: %2.f \n",somatorio);
    printf("A media e de: %2.f",somatorio/5);
    /*for(int contador = 0; contador < tamanho ; contador++){
        printf("%d \n",vetor_numeros[contador]);
    }*/


}