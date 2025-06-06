#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include "FuncoesQ11.h"

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int mtrz[4][4], encontrou = 0;
	
	srand(time(NULL));
	
	do{
		matriz(mtrz);
		encontrou = mtrzSquareMagic(mtrz, 0);
		
	} while(!encontrou);
	
	return 0;
}
