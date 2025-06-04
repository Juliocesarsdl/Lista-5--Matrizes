#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include "FuncoesParesImpares.h"

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mtrz[5][5], maior = 0, menor = 0;

	printf("Olá usuário(a), seja bem-vindo!!\n");
	printf("Uma matriz 5x5 será preenchida com números aleatórios de 0 a 50, e mostraremos os números pares e impares e o maior e menor número encontrado!!\n\n");
	
	srand(time(NULL));
	
	matriz(mtrz);
	imprimeMatriz(mtrz);
	
	maior = maiorNum(mtrz);
	menor = menorNum(mtrz);
	
	printf("\n\nMaior número: %i\n", maior);
	printf("Menor número: %i\n", menor);
	
	paresImpares(mtrz);
	
	return 0;
}
