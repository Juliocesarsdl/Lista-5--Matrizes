#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nms[3][3], L, C, soma = 0;
	
	printf("Olá seja bem vindo usuário(a). Preencha os valores das matrizes e mostraremos a soma da sua diagonal principal!!\n\n");
	
	for(L=0;L<3;L++){
		for(C=0;C<3;C++){
			printf("Digite o valor para a linha %i coluna %i da sua matriz: ", L+1, C+1);
			scanf("%i", &nms[L][C]);
			
			if(L == C){
				soma += nms[L][C];
			}	
		}
	}
	
	printf("\n\n");
	
	for(L=0;L<3;L++){
		printf("|");
		for(C=0;C<3;C++){
			printf("%3i", nms[L][C]);	
		}
		printf("|\n");
	}
	
	printf("\n\nResultado da soma: %i", soma);
	
	return 0;
}
