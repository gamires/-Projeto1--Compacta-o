// Gabriel Mires Camargo Ra: 10436741
// Sofia Castelli Ra: 10443550

#include <stdio.h>

#include <stdio.h>

// Função para descompactar a string, expandindo os caracteres repetidos
void descompactar(const char *texto) {
    if (!texto || *texto == '\0') return; // Verifica se a string é nula ou vazia
    
    int indice = 0;
    while (texto[indice] != '\0') {
        char caractere_atual = texto[indice]; // Armazena o caractere atual
        indice++;
        
        int contador = 0;
        while (texto[indice] >= '0' && texto[indice] <= '9') { // Captura o número de repetições
            contador = contador * 10 + (texto[indice] - '0');
            indice++;
        }
        
        for (int i = 0; i < contador; i++) { // Imprime o caractere repetido
            printf("%c", caractere_atual);
        }
        
        if (texto[indice] == '-') { // Ignora o traço separador
            indice++;
        }
    }
    printf("\n");
}


//teste da função se quiser descomete as linhas seguintes 
//int main() {
    //descompactar("a7-b5-a10");
    //descompactar("a6-b15-c1-d1");
    //return 0;
//}
