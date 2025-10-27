#include <stdio.h>

int main(){

//Definindo as variaveis   
int torre, bispo = 0, rainha = 0;

//Exibindo o nome da peça

printf("~Torre~\n");

//Movimento da torre

for(torre = 0; torre < 5; torre++){
    printf("Direita\n");

}

//Exibindo o nome da peça

printf("~Bispo~\n");

//Movimento do Bispo

while(bispo < 5){
    printf("Cima,Direita\n");
    bispo++;
}

//Exibindo o nome da peça

printf("~Rainha~\n");

//Movimento da Rainha

do{
    printf("Esquerda\n");
    rainha++;

} while(rainha <8);

return 0;

}