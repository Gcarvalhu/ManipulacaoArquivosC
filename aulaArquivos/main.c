#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//FILE � uma sintaxe padr�o
	FILE *arq;
	//fopen � usado para abrir o arquivo com o caminho desejado
	arq = fopen("C:\\Users\\gusta\\Documents\\arquivoExemplo\\arquivo.txt", "r");//r l� o arquivo, caso for "w" seria escrever um arquivo novo ou j� existente
	if(arq == NULL){
		printf("Erro ao abrir o arquivo,tente novamente.\n");
	}
	else 
		printf("Arquivo aberto com sucesso! \n");	
	return 0;
}
