#include <stdio.h>
#include <locale.h>
#include "FuncoesQ10.h"

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mtrz[3][4] = {0}, total = 0;
	
	printf("Ol� usu�rio(a), seja muito bem-vindo a nosso empresa de viagens!!!\n\n");
	printf("As cadeiras est�o estabelecidas como uma matriz, com as linhas de 0 a 2 e as colunas de 0 3.\n");
	printf("Fa�a sua escolha e mostraremos a sua cadeira escolhida. Ent�o o que est� perdendo?\n\n");
	
	total = decisao(mtrz, total);
	
	return 0;
}
