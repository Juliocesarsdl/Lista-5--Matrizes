#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nms[3][3], L, C;
	
	printf("Olá seja bem vindo usuário(a). Preencha os valores das matrizes e mostraremos apenas sua Diagonal principal!!\n\n");
	
	for(L=0;L<3;L++){
		for(C=0;C<3;C++){
			printf("Digite o valor para a linha %i coluna %i da sua matriz: ", L+1, C+1);
			scanf("%i", &nms[L][C]);	
		}
	}
	
	printf("\n\n");
	
	for(L=0;L<3;L++){
		
		printf("|");
		
		for(C=0;C<3;C++){
			if(L == C){
				printf(" %3i ", nms[L][C]);
			} else {
				printf("     ");
			}
		}
		printf("|");
		printf("\n");
	
	}
		
	return 0;
}
