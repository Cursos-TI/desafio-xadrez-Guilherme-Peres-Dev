#include <stdio.h>

int main(){
    int peca;
    int casa;
    int torre = 1; //Declarei pra poder usar o While no case 2
    int movimentocompleto = 1;

    
    //Apresentando o jogo, explicando as regras 
    //Também fiz um menu pro usuario poder selecionar a peça e quantas casas vai andar
    printf("Bem vindo ao Jogo Xadrez !\n");
    printf("Escolha qual peça você deseja mover, sendo:\n");
    printf("1 para Rainha (anda ATÉ 8 casas pra esquerda\n");
    printf("2 para Torre (anda ATÉ 5 casas pra direita)\n");
    printf("3 para Bispo (anda ATÉ 5 casas na diagonal)\n");
    printf("4 para Cavalo (anda SEMPRE 3 casas em L)\n");
    scanf("%d", &peca);
    printf("Digite quantas casas vc deseja andar:\n");
    printf("No caso do Cavalo, selecione somente '3' :\n");
    scanf("%d", &casa);



//============Case 1 pro Rainha
    //Usei um switch pra poder separar as escolhas por numero e poder criar cases
    //Pra colocar o laço de repetição dentro do IF e invalidar se ele digitar um numero de casas invalidos
    switch(peca){
        case 1: // Case 1 pra Rainha, usei o for
            if (casa <= 8){
                for(int rainha = 0; rainha < casa; rainha++){
                printf("Esquerda\n");// Imprime a direcao do movimento
                
            }
        }
            else{
                printf("Número de casas inválida");
        }
        break;


//============Case 2 pro Torre
        case 2:
            if (casa <= 5){
                while (torre <= casa){
                    printf("Direita\n");
                    torre ++;
                }
                
            }
            else{
                printf("Número de casas inválida");
            }
        break;
                

 //============Case 3 pro Bispo
        case 3:
        int bispo = 1;
            if(casa <= 5){
                do{
                   printf("Cima\n");
                   printf("Direita\n");
                   bispo++;}
                while (bispo <= casa);
                }   
            
            else{
                printf("Número de casas inválida");

            }
        break;

//=============Case 4 pro cavalo
        case 4:
            if (casa != 3){ // Aqui achei melhor testar se a entrada for invalida primeiro pra resolver esse problema mais facil
            printf("Entrada inváilida, o cavalo pode andar somente 3 casas\n"
            );}

            else{
                int direcao; // Pra me desafiar um pouco adicionei pro usuario andar pra cima ou pra baixo
                printf("Escolha a direção que vc quer andar, digitando '1' para cima ou '2' para baixo\n");
                scanf("%d", &direcao);


                
                if (direcao == 1){
                    while (movimentocompleto--){
                        for(int i = 0; i <2; i++){
                            printf("Cima\n"); // Imprime "Cima" duas vezes
                        }
                        printf("Direita\n"); // Imprime "Direita" uma vez
                    }
                }             
                else if (direcao == 2){  //Usei a mesma lógica, só mudei o printf
                    while(movimentocompleto--){
                        for(int i = 0; i < 2; i++){
                            printf("Baixo\n"); // Imprime "Baixo" duas vezes
                        }
                        printf("Esquerda\n"); // Imprime "Esquerda" duas vezes
                    }
                }
                else{
                    printf("Entrada de Direção inválida !\n");
                }


            }
        break;

    



    












    }
return 0;


}