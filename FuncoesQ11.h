void matriz(int mtrz[4][4]){
	int L, C;
	
	for(L=0;L<4;L++){
		for(C=0;C<4;C++){
			mtrz[L][C] = rand() % 11;
		}
	}
}

void imprimMatriz(int mtrz[4][4]){
	int L, C;
	
	for(L=0;L<4;L++){
		printf("|");
		for(C=0;C<4;C++){
			printf(" %2i ", mtrz[L][C]);
		}
		printf("|\n");
	}
}

int mtrzSquareMagic(int mtrz[4][4], int soma){
	int L, C, somaL, somaC, somaDp = 0, somaDs = 0, somaRef = 0;
	
	for(L=0;L<4;L++){
		somaDp += mtrz[L][L];
	}
	
	for(L=0;L<4;L++){
		somaDs += mtrz[L][3-L];
	}
	
	if(somaDp != somaDs){
		imprimMatriz(mtrz);
		printf("\nNão é Quadrado Mágico.");
		return 0;
	} 
		
	somaRef = somaDp;
		
	for(L = 0; L < 4; L++){
		somaL = 0;
        for(C = 0; C < 4; C++) {
            somaL += mtrz[L][C];
        }
        if(somaL != somaRef){
        	imprimMatriz(mtrz);
        	printf("\n\nNão é Quadrado Mágico.\n");
            return 0;
    	}
	}
	
	for(C = 0; C < 4; C++) {
		somaC = 0;
        for(L = 0; L < 4; L++) {
        	somaC += mtrz[L][C];
        }
        	
		if(somaC != somaRef){
			imprimMatriz(mtrz);
			printf("\n\nNão é Quadrado Mágico.\n");
            return 0;
    	}
	}	
	imprimMatriz(mtrz);
	
	printf("\nQue sorte!!! Acabamos de identificar o famoso Quadrado Mágico!!!!\n");
	return 1;
}
