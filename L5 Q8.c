#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mtrz[3][3], L, C, num_dig, encontrou = 0;

	srand(time(NULL));
	
	printf("Olá usuário(a). Seja bem-vindo.\n");
	printf("Vamos mostrar uma matriz 3x3 que será preenchida com valores aleatórios de 0 a 1000.\n");
	printf("Tente advinhar qual valor dentro desse intervalo!!\n\n");
			
	for(L = 0; L < 3; L++){
		for(C = 0; C < 3; C++){
			mtrz[L][C] = rand() % 26
			;
		}
	}
	
	do{
			printf("Digite sua predição: ");
			scanf("%i", &num_dig);
			
			encontrou = 0;
			
				for(L = 0; L < 3; L++){
					for(C = 0; C < 3; C++){
						if(num_dig == mtrz[L][C]){
							encontrou = 1;
						}
					}
				}
			
			if(encontrou){
				
				printf("\n");
				
				for(L = 0; L < 3; L++){
					printf("|");
					for(C = 0; C < 3; C++){
						printf("%4i", mtrz[L][C]);						
					}
					printf("|\n");
				}
				
				printf("\nPessoa de Sorte!!!!");
			} else {
				printf("\nTu és azarado demais!!!\n\n");
			}
			
	} while(!encontrou);
	
	return 0;
}
