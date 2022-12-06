#include <iostream>

int main() {
    //printf("---- Calculando a media para 10 alunos -----\n\n");
    int tamanho_do_vetor = 0;int numero_digitado = 0;int verificao = 0;

    while(tamanho_do_vetor < 1 || tamanho_do_vetor > 100){
        printf("Informe o tamanho do vetor \n");
        scanf("%d",&tamanho_do_vetor);
    }
    int vetor_numeros[tamanho_do_vetor];

    for(int contador = 0; contador < tamanho_do_vetor ; contador++){
        verificao = 0;
        printf("Digite um numero \n");
        scanf("%d", &numero_digitado);
        for(int contador2 = 0; contador2 < tamanho_do_vetor; contador2++){
            if(vetor_numeros[contador2] == numero_digitado){
                verificao = 1;
            }
        }
        if(verificao == 1){
            vetor_numeros[contador] = 0;
        }else{
            vetor_numeros[contador] = numero_digitado;
        }
    }
    for (int contador = 0; contador < tamanho_do_vetor; contador++) {
        if(vetor_numeros[contador] != 0){
            printf("%d \n",vetor_numeros[contador]);
        }
    }

}
