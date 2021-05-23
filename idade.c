#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    char nome [100];

    printf("Digite seu nome: \n");
    gets(nome);
    printf("Digite sua idade \n");
    scanf("%i", &i);

    if(i <= 18){
        printf("%s Voce pode dirigir ", nome);
    }else{
        printf("%s peeee voce nao pode dirigir", nome);
    }
    return 0;
}