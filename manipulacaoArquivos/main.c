#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	FILE *arq;
	char buffer[50];
	int i;
	
	printf("Escrita: \n\n");
	
	if(!(arq = fopen("C:\\Users\\gusta\\Documents\\arquivoExemplo\\arql.txt","w")))
		printf("Erro! \n\n");
	else
	{
		//sprintf copia uma string para uma váriavel, no caso o buffer
		sprintf(buffer, "Numeros de 1 a 10 \n");
		fputs(buffer,arq);
		for(i = 1; i<=10; i++);
			fprintf(arq, "%d \n", i);
		printf("Sucesso! \n\n");
	}
	
	fclose(arq);
	
	printf("Leitura: \n\n");
	
	char *titulo[40];
	int numeros[10];
	
	if(!(arq = fopen("C:\\Users\\gusta\\Documents\\arquivoExemplo\\arql.txt","r")))
		printf("ERRO \n");
	else
	{
		fgets(&titulo, 40, arq);
		printf("Titulo: %s", titulo);
		for(i=0; i<10; i++)
		{
			fscanf(arq, "%d", &numeros[i]);
			printf("%d \n", numeros[i]);
		}
	}
	fclose(arq);
	
		
	return 0;
}
