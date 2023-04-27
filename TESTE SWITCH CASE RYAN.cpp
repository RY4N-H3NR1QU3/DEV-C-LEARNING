#include"stdio.h"
#include"locale.h"
#include"math.h"
#include"stdlib.h"
main()
{
	setlocale(LC_ALL,"");char OP;
	system("Color 1D");
	printf("\n\t\t\t\t*************");
	printf("\n\t\t\t\t*CALCULADORA*");
	printf("\n\t\t\t\t*************");
	printf("\n DIGITE 1 PARA SOMA:");
	printf("\n DIGITE 2 PARA SUBTRAÇÃO:");
	printf("\n DIGITE 3 PARA DIVIDISÃO:");
	printf("\n DIGITE 4 PARA MULTIPLICAÇÃO:");
	printf("\n DIGITE 5 PARA PONTÊNCIA:");
	printf("\n DIGITE 6 PARA RAIZ:");
	printf("\n ESCOLHA UMA DAS OPÇÕES:"),scanf("%s",&OP);
	switch(OP)
	{
		case '1':
		{
			float A,B;
			system("Color 2D");
			printf("\n********************");
			printf("\n*VOCÊ ESCOLHEU SOMA*");
			printf("\n********************");
			printf("\nINSIRA OS NUMEROS:"), scanf("%f%f",&A,&B);
			printf("\n SOMA= %.2f",A+B);
			break;
			
			
		}
		case '2':
			{
				float A,B;
				system("Color 3D");
				printf("\n*************************");
				printf("\n*VOCÊ ESCOLHEU SUBTRAÇÃO*");
				printf("\n*************************");
				printf("\nINSIRA OS NUMEROS:"),scanf("%f%f",&A,&B);
				printf("\nSUBTRAÇÃO= %.2f",A-B);
				break;
			}
		case '3':
			{
				float A,B;
				system("Color 4D");
				printf("\n***********************");
				printf("\n*VOCÊ ESCOLHEU DIVISÃO*");
				printf("\n***********************");
				printf("\nINSIRA OS NUMEROS:"),scanf("%f%f",&A,&B);
				printf("\nDIVISÃO= %.2f",A/B);
				break;
				
			}
		case '4':
			{
				float A,B;
				system("Color 2D");
				printf("\n*****************************");
				printf("\n*VOCÊ ESCOLHEU MULTIPLICAÇÃO*");
				printf("\n*****************************");
				printf("\nINSIRA OS NUMERO:"),scanf("%f%f",&A,&B);
				printf("\nMULTIPLICAÇÃO= %.2f",A*B);
				break;
			}
		case '5':
			{
				float A,B;
				system("Color 5D");
				printf("\n************************");
				printf("\n*VOCÊ ESCOLHEU POTÊNCIA*");
				printf("\n************************");
				printf("\nINSIRA OS NUMEROS:"),scanf("%f%f",&A,&B);
				printf("\nPOTÊNCIA= %.2f",pow(A,B));
				break;
			}
		case '6':
			{
				float X;
				system("Color 6D");
				printf("\n********************");
				printf("\n*VOCÊ ESCOLHEU RAIZ*");
				printf("\n********************");
				printf("\nINSIRA O NUMERO:"),scanf("%f",&X);
				printf("\nRAIZ= %.2f", sqrt(X));
				break;
			}
	}
	
}

