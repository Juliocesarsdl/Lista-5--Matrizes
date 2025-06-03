#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mtrz[3][3], L, C,  mult_dp = 1, mult_ds = 1, all_mult = 0;
	
	printf("Olá usuário(a). Seja bem-vindo.\n");
	printf("Prencha uma matriz 3x3 e mostraremos a multiplicação da Diagonal principal e secundária da mesma!!!\n\n");
	
	for(L = 0; L < 3; L++){
		for(C = 0; C < 3; C++){
			printf("Digite o valor da Linha [%i] Coluna [%i]: ", L+1, C+1);
			scanf("%i", &mtrz[L][C]);
			
			if(L == C){
				mult_dp *= mtrz[L][C];
			} 
			
			if(L + C == 2){
				mult_ds *= mtrz[L][C];
			}
		}
	}
	
	all_mult = mult_ds * mult_dp;
	
	printf("\n");
	
	for(L = 0; L < 3; L++){
		printf("|");
		for(C = 0; C < 3; C++){
			printf(" %3i ", mtrz[L][C]);
		}
		printf("|\n");
	}
	
	printf("\nResultado da multiplicação da diagonal principal: %i", mult_dp);
	printf("\nResultado da multiplicação das diagonal secundária: %i", mult_ds);
	printf("\nResultado da multiplicação das diagonais: %i", all_mult);
	
	return 0;
}
