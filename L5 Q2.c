#include <stdio.h>
#include <locale.h>

int main (void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nms[2][2], L, C;
	
	printf("Ol� seja bem vindo usu�rio(a). Preencha os valores das matrizes e mostraremos ela para voc�!!\n\n");
	
	for(L=0;L<2;L++){
		for(C=0;C<2;C++){
			printf("Digite o valor para a linha %i coluna %i da sua matriz: ", L+1, C+1);
			scanf("%i", &nms[L][C]);
		
		}
	}
	
	printf("\n\n");
	
	for(L=0;L<2;L++){
		printf("|");
		for(C=0;C<2;C++){
			printf(" %i ", nms[L][C]);
		}
		printf("|\n");
	}
	
	return 0;
}
