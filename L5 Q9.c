#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include "FuncoesParesImpares.h"

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mtrz[5][5], maior = 0, menor = 0;

	printf("Ol� usu�rio(a), seja bem-vindo!!\n");
	printf("Uma matriz 5x5 ser� preenchida com n�meros aleat�rios de 0 a 50, e mostraremos os n�meros pares e impares e o maior e menor n�mero encontrado!!\n\n");
	
	srand(time(NULL));
	
	matriz(mtrz);
	imprimeMatriz(mtrz);
	
	maior = maiorNum(mtrz);
	menor = menorNum(mtrz);
	
	printf("\n\nMaior n�mero: %i\n", maior);
	printf("Menor n�mero: %i\n", menor);
	
	paresImpares(mtrz);
	
	return 0;
}
