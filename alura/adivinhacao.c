#include<stdio.h>

int main(){

	// imprime o cabeçalho do jogo
	printf(" \n ******************************************************************");
	printf(" \n Bem vindo ao jogo de adivinhação ** ");
	printf("  \n******************************************************************\n");

	int numerosecreto = 42;
	int chuteusuario = 0;
	
	printf(" Digite um número \n ");
	scanf("%d",&chuteusuario);

	if(chuteusuario == numerosecreto){
		printf(" acertou ");
	}else if(chuteusuario > numerosecreto){
		printf(" seu chute foi maior do que o numero secreto ");
	}else{
		printf(" seu chute foi menor que o numero secreto ");
	} 

	//printf("\n Esse é o número secreto não conta para ninguém \n %i ",numerosecreto);
	return 0;
}