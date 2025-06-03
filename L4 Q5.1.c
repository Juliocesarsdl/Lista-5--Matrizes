#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nms[4][4], L, C;
	
	printf("Olá usuário(a), seja bem vindo!!\n");
	printf("Digite os seus valores para preencher uma matriz 4x4, e se eles forem ímpares, iremos mostrá-los!!\n\n");
	
	for(L = 0; L < 4; L++){
		for(C = 0; C < 4; C++){
			printf("Digite seus valores para Linha[%i] Coluna[%i]: ", L+1, C+1);
			scanf("%i", &nms[L][C]);
		}
	}	
	
	printf("\n\nResultado:\n\n");
	
	for(L=0;L<4;L++){
		printf("|");
		for(C=0;C<4;C++){
			if(nms[L][C] % 2 == 0){
				printf("    ");
			} else {
				printf(" %3i ", nms[L][C]);
			}
		}
		printf("|");
		printf("\n");	
	}
	return 0;
}
