#include <stdio.h>
#include <stdlib.h> //classe que tem a função system

int main()
{
    int num1, num2, pontos;
    char jd1[20], jd2[20], resp; //o '[]' está sendo usado p/ delimitar o caracter
    
    pontos = 100;
    
    printf("Bem-vindos ao jogo de adivinhação\n\n");
    printf("Escreva o nome do jogador 1: ");
    scanf("%s", jd1); //%s é para string e não é necessario '&'
    
    printf("Escreva o nome do jogador 2:");
    scanf("%s", jd2);
    
    system("clear"); //limpa a tela
    
    printf("\nPor favor, %s, digite um número: ", jd1);
    scanf("%d", &num1);
    
    system("clear");
    
    printf("Sua vez! \nDigite o número que você acha que foi digitado: ");
    printf("");
    scanf("%d", &num2);
    
    while(num1 != num2){
        printf("\n\n\nErrou!\nPerdeu 10 pontos\n\n\n\n ");
        
        if(num1 < num2){
            printf("Número secreto menor que seu palpite.");
        }
            
        else{
            printf("Número secreto maior que seu palpite.");
        }
        
        pontos = pontos - 10;
        printf("\n\nTente novamente: ");
        scanf("%d", &num2);
    }
    
    return 0;
}
