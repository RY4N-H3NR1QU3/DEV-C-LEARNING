#include"stdio.h"
#include"locale.h"
#include"math.h"
#include"stdlib.h"
main()
{	
 	setlocale(LC_ALL,"");char OP;
	printf("\n***********");
	printf("\n*OPERAÇÕES*");
	printf("\n***********");
	printf("\n\n\n DIGITE 1 PARA SELECIONAR SOMA E TRIPLO DA SOMA");
	printf("\n DIGITE 2 PARA SELECIONAR PRODUTOS");
	printf("\n\n\n DIGITE A OPERAÇÃO DESEJADA:"), scanf("%s",&OP);
	switch(OP)
	{
		case'1':
			{
				printf("\n*******************************");
				printf("\n*VOCÊ SELECIONOU SOMA E TRIPLO*");
				printf("\n*******************************");
				float X,Y;
				printf("\n\n DIGITE OS NUMEROS:"),scanf("%f%f",&X,&Y);
				printf("\n SOMA=%.2f",X+Y);
				printf("\n TRIPLO DA SOMA=%.2f",3*(X+Y));
				break;
			}
		case'2':
			{
				printf("\n**********");
				printf("\n*PRODUTOS*");
				printf("\n**********");
				float P,Q;char PRODUTO[10];
				printf("\n INFORME O NOME DO PRODUTO:"),scanf("%s",&PRODUTO),gets(PRODUTO);
				printf("\n INFORME O PREÇO DO PRODUTO:"),scanf("%f",&P);
				printf("\n INFORME A QUANTIDADE:"),scanf("%f",&Q);
				
				
			}	
	}
	
	
	
}
