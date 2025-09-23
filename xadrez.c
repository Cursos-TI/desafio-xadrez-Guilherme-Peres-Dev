#include <stdio.h>

//aqui coloquei os voids


// rainha
void rainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

// torre
void torre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        torre(casas - 1);
    }
}

// Bispo
void bispo(int casas) {
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {
            printf("Cima\n");
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
        }
        bispo(casas - 1);
    }
}

// cavalo só anda em L
void cavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}



//=============PROGRAMA PRINCIPAL
int main() {
    int peca;
    int casa;
    
    printf("Bem vindo ao Jogo Xadrez!\n");
    printf("Escolha qual peça você deseja mover, sendo:\n");
    printf("1 para Rainha (anda ATÉ 8 casas pra esquerda)\n");
    printf("2 para Torre (anda ATÉ 5 casas pra direita)\n");
    printf("3 para Bispo (anda ATÉ 5 casas na diagonal)\n");
    printf("4 para Cavalo (anda SEMPRE 3 casas em L)\n");
    scanf("%d", &peca);
    
    // verificar somente a qtd de casas q precisa
    if (peca >= 1 && peca <= 3) {
        printf("Digite quantas casas vc deseja andar:\n");
        scanf("%d", &casa);
    }

    // Usei um switch para separar as escolhas
    switch(peca) {
        case 1: // Rainha
            if (casa <= 8) {
                rainha(casa);
            } else {
                printf("Número de casas inválido.\n");
            }
            break;

        case 2: // Torre
            if (casa <= 5) {
                torre(casa);
            } else {
                printf("Número de casas inválido.\n");
            }
            break;

        case 3: // Bispo
            if (casa <= 5) {
                bispo(casa);
            } else {
                printf("Número de casas inválido.\n");
            }
            break;

        case 4: // Cavalo
            cavalo();
            break;
            
        default:
            printf("Opção de peça inválida.\n");
            break;
    }

    return 0;
}