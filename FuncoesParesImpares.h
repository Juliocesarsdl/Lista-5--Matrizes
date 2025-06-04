
void matriz(int mtrz[5][5]){
	
	int L, C;
	
	for(L = 0; L < 5; L++){
		for(C = 0; C < 5; C++){
			mtrz[L][C] = rand() % 51;
		}
	}	
}

void paresImpares(int mtrz[5][5]){
	
	int par = 0, impar = 0, L, C;
	
	for(L = 0; L < 5; L++){
		for(C = 0; C < 5; C++){
			if(mtrz[L][C] % 2 == 0){
				par++;
			} else {
				impar++;
			}
		}
	}
	
	printf("Quantidade de pares: %i", par);
	printf("\nQuantidade de ímpares: %i", impar);
}

int maiorNum(int mtrz[5][5]){
	
	int M, L, C;
	
	M = mtrz[0][0];
	
	for(L = 0; L < 5; L++){
		for(C = 0; C < 5; C++){
			if(mtrz[L][C] > M){
				M = mtrz[L][C];
			}
		}
	}
	
	return M;
}

int menorNum(int mtrz[5][5]){
	
	int m, L, C;
	
	m = mtrz[0][0];
	
	for(L = 0; L < 5; L++){
		for(C = 0; C < 5; C++){
			
			if(mtrz[L][C] < m){
				m = mtrz[L][C];
			}
		}
	}
	
	return m;
}

void imprimeMatriz( int mtrz[5][5]){
	
	int L, C;
	
	for(L = 0; L < 5; L++){
		printf("|");
		for(C = 0; C < 5; C++){
			printf(" %2i ", mtrz[L][C]);
		}
		printf("|\n");
	}	
}
