#include <stdio.h>
#include <stdlib.h>
/* Um ponto importante desse programa; Bom vamos começar à lembrar que todo tipo de vetor e usado uma lógica dentro dele.
 Essa lógica e o [N -1], para que possamos encontrar o valor. */

int main(){
    int anoCarros [4] [3];  /* Lembrete: É importante que eu lembre que essa matriz não aceita dois valores ao mesmo tempo; Bom até o momento  */
    float valor;
        anoCarros [0] [0] = 1;

        anoCarros  [1] [0]  = 2;

        anoCarros  [2] [0] = 3;

        anoCarros  [3] [0] = 4;

        /*Concluido os valores da primeiera tabela */
        /* Anos dos carros */
        anoCarros [0] [1] = 1997;

        anoCarros [1] [1] = 2022;

        anoCarros [2] [1] = 2000;

        anoCarros [3] [1] = 1988;
    /* Valor dos carros da garagem */
        
    int escolha;
        printf("Escolha um carro na garagem: ");
            scanf("%d", &escolha);
    /* "Se" para que possa ser encontrado o valor escolhido pelo cliente */
    if(escolha >= 0 && escolha <= 4){
        printf("O carro e do ano %d\n", anoCarros[escolha -1][1]); /* (escolha[ N -1 ]) usado para busca na segunda COLUNAS[1] */
        printf("O valor do carro e de: ");
            scanf("%f", &valor);
        printf("O carro escolido e do %d, e o valor ficou em %.3f\n", valor, escolha);
    /* O "se não" usado para indícar que não há esse valor da caragem*/
    }

    else{
        printf("Não encontrado no banco de dados da garagem\n");
    }

}
