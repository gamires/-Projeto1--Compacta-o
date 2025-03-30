// Gabriel Mires Camargo Ra: 10436741
// Sofia Castelli Ra: 10443550

#include <stdio.h>
#include <stdio.h>
#include <string.h>

// Função para compactar padrões repetidos em uma string
void ex3(const char *input) {
    int len = strlen(input);
    int i = 0;

    // Loop principal: percorre a string para encontrar padrões repetidos.
    while (i < len) {
        int count = 1; // Inicializa o contador para o número de repetições
        int patternLen = 1;

        // Busca padrões de repetições consecutivas
        while (i + patternLen < len && input[i] == input[i + patternLen]) {
            patternLen++;
        }

        // Verifica se o padrão é repetido e conta o número de repetições
        while (i + patternLen < len && strncmp(input + i, input + i + patternLen, patternLen) == 0) {
            count++;
            i += patternLen; // Avança o índice para a próxima posição não repetida
        }

        // Se houver repetições, imprime o padrão compactado
        if (count > 1) {
            printf("%c%d", input[i - patternLen], count);
        } else {
            printf("%c", input[i - 1]);
        }

        // Se o próximo caractere não for o final da string, imprime o separador "-"
        if (i < len) {
            printf("-");
        }
    }

    printf("\n");
}

//teste da função se quiser descomete as linhas seguintes 
//int main() {
    //ex3("abababababababababab");
    //ex3("ababababababaaaaaaaaaaaa");
    //ex3("abcabcabcabcxyxyxyccccccc");
    //ex3("antonioantonioantoniocarloscarlos");
    //return 0;
//}
