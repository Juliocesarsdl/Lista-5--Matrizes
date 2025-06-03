#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mtrz[3][3], L, C,  maior = 0, menor = 0;

	srand(time(NULL));
	
	printf("Olá usuário(a). Seja bem-vindo.\n");
	printf("Vamos mostrar uma matriz 3x3 que será preenchida com valores aleatórios de 0 a 20.\n");
	printf("Logo após, iremos mostrar o maior e o menor valor encontrado nessa matriz!!\n\n");
		
	for(L = 0; L < 3; L++){
		for(C = 0; C < 3; C++){
			mtrz[L][C] = rand() % 21;
		}
	}
	
	maior = mtrz[0][0];
	menor = mtrz[0][0];
	
	for(L = 0; L < 3; L++){
		printf("|");
		for(C = 0; C < 3; C++){
			printf(" %2i ", mtrz[L][C]);
			
			if(mtrz[L][C] > maior){
				maior = mtrz[L][C];
			} 
			
			if(mtrz [L][C] < menor){
				menor = mtrz[L][C];
			}			
		}
		printf("|\n");
	}
		
	printf("\nMaior valor encontrado: %i", maior);
	printf("\nMenor valor encontrado: %i", menor);
	
	return 0;
}
