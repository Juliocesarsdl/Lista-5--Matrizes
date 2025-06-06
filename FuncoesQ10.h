
int decisao(int mtrz[3][4], int total){
	
	int opts, L = 0, C = 0, soma = 0;
	
	
	printf("Os lugares estão sendo indicados como matrizes. Para escolha correta, digite a linha (0 a 2) e a coluna (0 a 3), para escolher corretamente a posição da poltrona desejada.\n");
	printf("\nEscolha a opção desejada:\n\n");
	printf("1-Comprar;\n2-Mostrar poltronas;\n3-Mostrar valor total das compras;\n4-Sair;\n\n");
	
	do{
		
		printf("\nDigite A opção Desejada: ");
		scanf("%i", &opts);
		switch(opts){
			case 1:
				printf("\n");
				lugaresBus(mtrz);
				
				printf("\nEscolha a linha onde está o assento desejado: ");
				scanf("%i", &L);
				printf("\nEscolha a coluna onde está o assento desejado: ");
				scanf("%i", &C);
				
				if (L >= 0 && L <= 2 && C >= 0 && C <= 3) {
					if(mtrz[L][C] == 1){
						printf("\n\nCadeira já ocupada. Tente outro assento.\n\n");
					} else {
						mtrz[L][C] = 1;
					
						if(C == 0 || C == 3){
							printf("Cadeira na janela. Preço: R$20,00\n");
							total += 20;
						} else {
							printf("Cadeira na corredor. Preço: R$10,00\n");
							total += 10;
						}
					}
				} else {
    				printf("\n\nPosição inválida. Tente novamente.\n\n");
				}
				break;
				
			case 2:
				printf("\n");
				lugaresBus(mtrz);
				break;
			
			case 3:
				printf("\nTotal a pagar: R$%i,00\n", total);
				break;
				
			case 4: 
				printf("\nSaindo. Muito obrigado e até a próxima!!!");
				break;
				
			default:
				printf("\n\nOpção fora do estabelecido. Tente novamente.\n");
				break;
		}
	} while(opts != 4);
	
	
	
	return total;
}

void lugaresBus( int mtrz[3][4]){
	
	int L, C;
	
	for(L=0; L<3; L++){
		printf("|");
		for(C=0; C<4; C++){
			printf(" %i ", mtrz[L][C]);
		}
		printf("|\n");
	}
}




