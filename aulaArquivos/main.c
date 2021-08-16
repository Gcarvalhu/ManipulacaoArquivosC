#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	//FILE é uma sintaxe padrão
	FILE *arq;
	//fopen é usado para abrir o arquivo com o caminho desejado
	arq = fopen("C:\\Users\\gusta\\Documents\\arquivoExemplo\\arquivo.txt", "r");//r lê o arquivo, caso for "w" seria escrever um arquivo novo ou já existente
	if(arq == NULL){
		printf("Erro ao abrir o arquivo,tente novamente.\n");
	}
	else 
		printf("Arquivo aberto com sucesso! \n");	
	return 0;
}
