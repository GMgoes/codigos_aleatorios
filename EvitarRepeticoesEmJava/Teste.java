import java.util.Scanner;

public class Teste {

    public static void main(String[] args) {

        int tamanho_vetor = 0, numero_digitado;boolean verificacao = false;

        Scanner entrada = new Scanner(System.in);
        //Tamanho do vetor
        while(tamanho_vetor < 1 || tamanho_vetor > 100){
            System.out.println("Informe o tamanho do vetor");
            tamanho_vetor = entrada.nextInt();
        }

        int [] vetor_numeros = new int[tamanho_vetor];

        for (int i = 0; i < tamanho_vetor; i++) {
             verificacao = false;
            System.out.println("Digite um número");
            numero_digitado = entrada.nextInt();
            for (int numero_do_vetor:vetor_numeros) {
                if(numero_do_vetor == numero_digitado){
                    verificacao = true;
                }
            }
            if(verificacao){
                vetor_numeros[i] = 0;
            }else{
                vetor_numeros[i] = numero_digitado;
            }
        }

        for (int i = 0; i < tamanho_vetor; i++) {
            if(vetor_numeros[i] != 0){
                System.out.println(vetor_numeros[i]);
            }
        }
    }
}
