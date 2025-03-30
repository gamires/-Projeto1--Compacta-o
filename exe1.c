// Gabriel Mires Camargo Ra: 10436741
// Sofia Castelli Ra: 10443550
#include <stdio.h>
#include <string.h>

// Função para compactar a string, agrupando caracteres repetidos
void compactar(const char *texto) {
    if (!texto || *texto == '\0') return; // Verifica se a string é nula ou vazia
    
    int indice = 0, contador;
    while (texto[indice] != '\0') {
        char caractere_atual = texto[indice]; // Armazena o caractere atual
        contador = 1; // Inicializa o contador de repetições
        
        // Conta quantas vezes o caractere se repete consecutivamente
        while (texto[indice + 1] == caractere_atual) {
            contador++;
            indice++;
        }
        
        // Imprime o caractere seguido da quantidade de repetições
        printf("%c%d", caractere_atual, contador);
        if (texto[indice + 1] != '\0') { // Adiciona "-" se não for o último grupo
            printf("-");
        }
        
        indice++; // Avança para o próximo caractere
    }
    printf("\n");
}

int main(int quantidade_argumentos, char *argumentos[]) {
    if (quantidade_argumentos != 2) {
        printf("Uso correto: %s \"texto\"\n", argumentos[0]);
        return 1;
    }
    
    compactar(argumentos[1]); // Chama a função com o texto passado como argumento
    return 0;
}
int main() {
    //compactar("aaaaaaabbbbbaaaaaaaaaa");
    //compactar("abcabc");
    //return 0;
//}